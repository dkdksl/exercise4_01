/*
����ڿ��� int�� ������ �Է¹޾Ƽ� ����� ����ϱ�
���� �Է� 1   ���� ��� 1     
3 4           48  

���� �Է� 2   ���� ��� 2
100 -2        25  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, count;
	int result = 1;
	printf("�� ���� ������ �Է����ּ���\n");
	scanf("%d %d", &num1, &num2);
	for (count = 0; count <= 1; count++) {
		result = result * num2;
	}
	if (num2 >= 0) {
		result = num1 * result;
	}
	else {
		result = num1 / result;
	}
	printf("��� ��=%d\n", result);
	system("pause");
	return 0;
}
