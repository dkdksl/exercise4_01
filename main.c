/*
����:

���� �Է¹޾� �޷��� ������ ���� �޷��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
(1��=0.00087�޷�, 1�޷�=1152��)

�Է�:
��ȯ�� ���� ��ȯ�� ȭ�� �ش��ϴ� ���ĺ��� �Է��Ѵ�.
ex)1000 w (1000���� �޷��� ��ȯ) / 1000 d (1000�޷��� ��ȭ�� ��ȯ)

���:
�Է� ���� ���ĺ��� w�̸� ���� �޷���, d�̸� ���� ��ȭ�� ��ȯ�Ѵ�.

�����Է�1    �������1
1000 w        0.87000�޷�
�����Է�2    �������2
1000 d        1152000��

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int money;
	float won, dollar;
	char currency;

	scanf("%d %c", &money, &currency);
	switch (currency) {
		case 'D': case 'd':
			won = money * 1152;
			if (won - (int)won == 0) {
				printf("%d��\n", (int)won);
			} else {
				printf("%.5f��\n", won);
			}
			break;
		case 'W':case 'w':
			dollar = money * 0.00087;
			if (dollar - (int)dollar == 0) {
				printf("%d�޷�\n", (int)dollar);
			}
			else {
				printf("%.5f���޷�\n", dollar);
			}
			break;
		default:
			printf("�������� �ʴ� ȭ���Դϴ�.\n");
	}
	system("pause");
	return 0;
}