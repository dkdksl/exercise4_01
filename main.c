/*
���� : ������ ����� ǥ���Է����� ���� ��(month)�� �ش��ϴ� �б渣 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
1��б�:1,2,3�� / 2��б�: 4,5,6�� / 3��б�:7,8,9�� / 4��б�:10,11,12��
�Է� : ��(month)�� �Է��ϼ���.
��� : ���� �ش��ϴ� �б⸦ ����ϼ���/
���� �Է�1  / ���� ��� 1
1             1��б�
���� �Է�2  / ���� ��� 2
8             3��б�

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int month = 0;
	scanf("%d", &month);
	if (3 >= month) {
		printf("1��б�\n");
	}
	else if (month>3 && 6 >= month) {
		printf("2��б�\n");
	}
	else if (month>6 && 9 >= month) {
		printf("3��б�\n");
	}
	else if (month>9 && 12 >= month) {
		printf("4��б�\n");
	}
	system("pause");
	return 0;
}

