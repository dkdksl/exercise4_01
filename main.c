#include <stdio.h>
#include <stdlib.h>
int getsum(int n); // �Լ� ����
int main(void) {
	int max = 0;
	printf("1���� n������ ���� ���� n�� �Է��Ͻÿ�. >>");
	scanf("%d", &max);
	printf("1���� %d������ ��: %d\n", max, getsum(max));

	system("pause");
	return 0;
}

int getsum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + i; //4)
	return sum;
}