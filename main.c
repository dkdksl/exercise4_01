
#include <stdio.h>
#include <stdlib.h>

/*
number : ����� ���� ��
gubun : 1�̸� ������� ȭ�鿡 ���, 1�� �ƴϸ� ��¾���.
*/
int getDivisorCnt(int number, int gubun) {
	//���� : https://m.blog.naver.com/manniz/221012964994
	int i,count = 0;
	for (i = 1;i <= number;i++)	{
		if (number % i == 0) {
			count = count + 1;
			if (gubun == 1) {printf("%d ", i);}
		}
	}
	if (gubun == 1) { printf("\n"); }
	return count;
}

int main(void)
{
	int a;
	scanf("%d", &a);

	printf("%d\n", getDivisorCnt(a, 0));

	system("pause");
	return 0;
}
