#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, temp, a[4] = { 0, };
	int* ptr = &a;

	for (i = 0; i < 4; i++)
		scanf("%d", ptr+i);

	//ù��° ���� �ι�° ���� ���� ����� ���
	temp = *(ptr + 0) + *(ptr + 1);
	printf("%d\n", temp);

	//�� ���� ���� ������� ����° �Է°��� �� ����� ���
	temp = temp - *(ptr +2);
	printf("%d\n", temp);

	//�� ���� ���� ����� �׹�° ���� ���� ����� ���
	temp = temp * *(ptr+3);
	printf("%d\n", temp);

/*
	for (i = 0; i < 4; i++)
		printf("\n%d", a[i]);
*/
	system("pause");
	return 0;
}

