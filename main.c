#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define classMAX 20

// ���� 1(�����Լ�) : https://reakwon.tistory.com/63
// ���� 2(��������, ��������) : https://oopsys.tistory.com/15

//�������� ����
//�ѹ��� �����ؾ��� ����� ������ ȣ���ϸ� ���� ����� �߻��ʿ� ����!!!
void setRand(int *ban1, int *ban2, int *ban3, int *ban4) {
	int i;
	time_t t;
	srand((unsigned)time(&t));
	for (i = 0; i <classMAX; i++) ban1[i]=(rand() % 100);
	for (i = 0; i <classMAX; i++) ban2[i] = (rand() % 100);
	for (i = 0; i <classMAX; i++) ban3[i] = (rand() % 100);
	for (i = 0; i <classMAX; i++) ban4[i] = (rand() % 100);
}
void ascending(int *ban) {        // �������� �Լ�
	int i, j, tmp = 0;
	for (i = 0; i < classMAX; i++) {
		for (j = i; j < classMAX; j++) {
			if (ban[i] > ban[j]) {
				tmp = ban[i];
				ban[i] = ban[j];
				ban[j] = tmp;
			}
		}
	}
}
void descending(int *ban) {      // �������� �Լ�
	int i, j, tmp = 0;
	for (i = 0; i < classMAX; i++) {
		for (j = i; j < classMAX; j++) {
			if (ban[i] < ban[j]) {
				tmp = ban[i];
				ban[i] = ban[j];
				ban[j] = tmp;
			}
		}
	}
}
float avg(int *ban) {
	int sum = 0;
	for (int i = 0; i < classMAX; i++)
		sum = sum + ban[i];
	return (sum / classMAX );
}
int classMax(int *ban) {
	int max = ban[0];
	for (int i = 1;i < classMAX; i++)
		if (max < ban[i]) max = ban[i];
	return max;
}
int classMin(int *ban) {
	int min = ban[0];
	for (int i = 1;i < classMAX; i++)
		if (min > ban[i]) min = ban[i];
	return min;
}
void printHead() {
	printf("      ");
	for (int i = 0; i <classMAX; i++)
		printf("%4d", i + 1);
	printf("%s", "   ��� ");
	printf("%s", "  �ְ� ");
	printf("%s", "  ���� ");
	printf("\n");
	printf("------------------------------------------------------");
	printf("------------------------------------------------------\n");
}
void printDetail(int *ban, int no) {
	printf("�б�#%d",no);
	for (int i = 0; i <classMAX; i++)
		printf("%4d", ban[i]);
	printf("%7.2f", avg(ban)); //��� 
	printf("%7d", classMax(ban)); //�ְ���
	printf("%7d", classMin(ban)); //������
	printf("\n");
	printf("------------------------------------------------------");
	printf("------------------------------------------------------\n");
}
void printTotal(int *ban1, int *ban2, int *ban3, int *ban4) {
	int i, cnt = 0, totSum = 0, totMin = ban1[0], totMax = ban1[0];
	for (i = 0;i < classMAX; i++) {
		totSum = totSum + ban1[i];
		if (totMin > ban1[i])  totMin = ban1[i];
		if (totMax < ban1[i])  totMax = ban1[i];
		cnt = cnt + 1;
	}
	for (i = 0;i < classMAX; i++) {
		totSum = totSum + ban2[i];
		if (totMin > ban2[i])  totMin = ban2[i];
		if (totMax < ban2[i])  totMax = ban2[i];
		cnt = cnt + 1;
	}
	for (i = 0;i < classMAX; i++) {
		totSum = totSum + ban3[i];
		if (totMin > ban3[i])  totMin = ban3[i];
		if (totMax < ban3[i])  totMax = ban3[i];
		cnt = cnt + 1;
	}
	for (i = 0;i < classMAX; i++) {
		totSum = totSum + ban4[i];
		if (totMin > ban4[i])  totMin = ban4[i];
		if (totMax < ban4[i])  totMax = ban4[i];
		cnt = cnt + 1;
	}
	//printf("%d \n", cnt);
	printf("��ü�л� ���     :%7.2f\n", totSum / (cnt * 1.0));
	printf("��ü�л� �ְ����� :%4d\n", totMax);
	printf("��ü�л� �������� :%4d\n", totMin);
}
int main(void) {
	int a[classMAX] = { 0, }, b[classMAX] = { 0, }, c[classMAX] = { 0, }, d[classMAX] = { 0, };
	setRand(a, b, c, d);

	printHead();

	descending(a);
	printDetail(a, 1);

	ascending(b);
	printDetail(b, 2);

	descending(c);
	printDetail(c, 3);

	ascending(d);
	printDetail(d, 4);

	printTotal(a, b, c, d);
	system("pause");
	return 0;
}