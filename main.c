/*
�ݺ��� while���� ����Ͽ� 0���� 20������ 3�� ����� ����ϴ� ���α׷�
int n = 0, max = 20;
while (___________________) {
	printf("%4d", n);
	(__________________);
}
printf("\n");

��°��
0 3 6 9 12 15 18
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, max = 20;
	while (n < 20) {
		printf("%4d", n);
		n = n + 3;
	}
	printf("\n");
	system("pause");
	return 0;
}
