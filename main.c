#include <stdio.h>
#include <stdlib.h>
//����1 : https://starrykss.tistory.com/424
//����2 : https://m.cafe.daum.net/c-study/4tdN/345
int main(void) {
	int *arr; //�迭 �̸��� ������ ������
	int  n, m;    // �迭�� ũ��(n x m)�� ���� ����
	int sum = 0, i, j;
	int avg = 0;

	scanf("%d %d", &n, &m);
	arr = (int *)malloc(sizeof(int) *(n*m));//int �� �迭�� n x m ���� ũ��� ����
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", arr + i*n + j);
			sum = sum + arr[i*n + j];
		}
	}
	avg = sum / (n * m ); //������� ���
	//(����� ���� �������� ����Ѵ�.������ ��/������ ����� ũ��)
	//printf("avg = %d", avg);
	printf("\n");
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m; j++) {
			if (avg > arr[ i*n + j]) arr[i*n + j] = 0;
			printf("%d ", arr[i*n + j]);
		}
		printf("\n");
	}
	
	free(arr); //�����Ҵ��� ������.

	system("pause");
	return 0;
}