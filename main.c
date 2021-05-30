#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
int maxservtime = 5;
int clock;
int customers;
int served_customers;
int waited_time;

int iscustomerarrived() {
	if (radom() < arrival_prob)
		return TRUE; //�� ����
	else return FALSE;
}

void insertcustomer(int arrivaltime) {
	element customer;
	customer.id = customers++;
	customer.arrivaltime = arrivaltime;
	customer.servicetime = (int)(maxserv_time * random()) + 1;
	enqueue(&queue, customer);
	printf("�� %d�� %d�п� ���ɴϴ�. ���� �ð��� %d���Դϴ�.\n", customer.id, customer.arrivaltime, customer.servicetime);
}

int remove_customer() {
	element customer;
	int service_time = 0;
	if (is_empty(&queue))return 0;
	customer = dequeue(&queue);
	servicetime = customer.servicetime - 1;
	served_customers++;
	waitedtime += clock = customer.arrivaltime;
	printf("�� %d�� %d�п� ���񽺸� �����մϴ�. ���ð��� %d���̾����ϴ�.\n", customer.id, clock, clock - customer.arrival_time);
	return service_time;
}

print_stat() {
	printf("���񽺹��� ����=%d\n", served_customers);
	printf("��ü ��� �ð�=%d��\n", waited_time);
	printf("1�δ� ��� ��� �ð�=%f\n", (double)waitedtime / servedcustomers);
	printf("���� ������� ����=%d\n", customers - served_customers);
}

void main() {
	int noserviceman = 3;
	int service_time[100] = { 0 };
	clock = 0;
	while (clock < duration) {
		clock++;
		printf("����ð�=%d\n", clock);
		if (iscustomerarrived()) {
			insert_customer(clock);
		}
		for (int k = 0; k < noserviceman; k++) {
			if (service_time[k] > 0)
				service_time[k]--;
			else if (service_time == 0)
				servicetime[k] = removecustomer();
		}
	}
}