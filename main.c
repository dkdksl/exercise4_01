#include <stdio.h>
#include <stdlib.h>

//���� : https://starrykss.tistory.com/424

int main(void) {
	int *arr; //�迭 �̸��� ������ ������
	int n;    // �迭�� ũ�⸦ ���� ����
	int sum = 0;
	float avg = 0.0;

	scanf("%d", &n);

	arr = (int *)malloc(sizeof(int) *n);//int �� �迭�� n���� ũ��� ����
	for (int i = 0;i < n; i++) scanf("%d", &arr[i]); //n���� ���� �迭�� ����

	for (int i = 0;i < n;i++) sum = sum + arr[i];//��ü ������ ���� �ջ�

	avg = sum / (n * 1.0); //������� ���
	printf("%5.2f\n", avg); //������� ���
	
	free(arr); //�����Ҵ��� ������.

	system("pause");
	return 0;
}