#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 100

typedef struct {
	int id;
	int arrival_time;
	int service_time;
}element;

typedef struct {
	element queue[MAX_SIZE];
	int front, rear;
}QueueType;

QueueType queue;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(QueueType* q) {
	q->front = q->rear = 0;
}

int is_empty(QueueType* q) {
	return (q->front == q->rear);
}

int is_full(QueueType* q) {
	return ((q->rear + 1) % MAX_SIZE == q->front);
}

void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("ť�� ��ȭ�����Դϴ�.");
		q->rear = (q->rear + 1) % MAX_SIZE;
		q->queue[q->rear] = item;
	}
}

element dequeue(QueueType* q) {
	if (is_empty(q))
		error("ť�� ������� �Դϴ�.");
	q->front = (q->front + 1) % MAX_SIZE;
	return q->queue[q->front];
}

element peek(QueueType* q) {
	if (is_empty(q))
		error("ť�� ������� �Դϴ�.");
	return q->queue[(q->front + 1) % MAX_SIZE];
}

double random() {
	return rand() / (double)RAND_MAX;
}

int duration = 10;
double arrival_prob = 0.7;
int maxserv_time = 5;
int clock_c;
int customers;
int served_customers;
int waited_time;
int iscustomerarrived() {
	srand(time(NULL)); // ���� �ʱ�ȭ
	if (rand() < arrival_prob)
		return TRUE; //�� ����
	else return FALSE;
}

void insert_customer(int arrival_time) {
	element customer;
	customer.id = customers++;
	customer.arrival_time = arrival_time;
	customer.service_time = (int)(maxserv_time * random()) + 1;
	enqueue(&queue, customer);
	printf("�� %d�� %d�п� ���ɴϴ�. ���� �ð��� %d���Դϴ�.\n", customer.id, customer.arrival_time, customer.service_time);
}

int remove_customer() {
	element customer;
	int service_time = 0;
	if (is_empty(&queue))return 0;
	customer = dequeue(&queue);
	service_time = customer.service_time - 1;
	served_customers++;
	waited_time += clock_c = customer.arrival_time;
	printf("�� %d�� %d�п� ���񽺸� �����մϴ�. ���ð��� %d���̾����ϴ�.\n", customer.id, clock_c, clock_c - customer.arrival_time);
	return service_time;
}

print_stat() {
	printf("���񽺹��� ����=%d\n", served_customers);
	printf("��ü ��� �ð�=%d��\n", waited_time);
	printf("1�δ� ��� ��� �ð�=%f\n", (double)waited_time / served_customers);
	printf("���� ������� ����=%d\n", customers - served_customers);
}

int main() {
	int noserviceman = 3;
	int service_time[100] = { 0 };
	clock_c = 0;
	while (clock_c < duration) {
		clock_c++;
		printf("����ð�=%d\n", clock_c);
		if (iscustomerarrived()) {
			insert_customer(clock_c);
		}
		for (int k = 0; k < noserviceman; k++) {
			if (service_time[k] > 0)
				service_time[k]--;
			else if (service_time == 0)
				service_time[k] = remove_customer();
		}
	}
	system("pause");
	return 0;
}