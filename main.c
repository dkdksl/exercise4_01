/*
50000
10000
1000
100
10
*/

#include <stdio.h>
#include <stdlib.h>

//���� �Լ� ��ó : http://ehpub.co.kr/%ec%95%8c%ea%b3%a0%eb%a6%ac%ec%a6%98-c%ec%96%b8%ec%96%b4-7-1-1-%ea%b1%b0%ec%8a%a4%eb%a6%84-%eb%8f%88-%ec%95%8c%ea%b3%a0%eb%a6%ac%ec%a6%98-%ec%86%8c%ec%8a%a4-%ec%bd%94%eb%93%9c/
void Calculate(int money1, int money2)
{
	int remain = money1 - money2;
	int ea=0;
	if (remain < 0) {
		printf("���� �����մϴ�.\n");
		return; //�Լ� Ż��
	}
	//printf("����:%d, ���� ��:%d\n", money2, money1);
	//printf("=== �Ž��� �� ===\n");
	if (remain>50000)
	{
		ea = remain / 50000;
		remain = remain % 50000;
	}
	printf("50000��:%d��\n", ea);

	ea = 0;
	if (remain>10000)
	{
		ea = remain / 10000;
		remain = remain % 10000;
	}
	printf("10000��:%d��\n", ea);

	ea = 0;
	if (remain>1000)
	{
		ea = remain / 1000;
		remain = remain % 1000;
	}
	printf("1000��:%d��\n", ea);

	ea = 0;
	if (remain>100)
	{
		ea = remain / 100;
		remain = remain % 100;
	}
	printf("100��:%d��\n", ea);

	ea = 0;
	if (remain>10)
	{
		ea = remain / 10;
		remain = remain % 10;
	}
	printf("10��:%d��\n", ea);
	ea = 0;
}
int main(void)
{
	int money1, money2; // ������, ����

	scanf("%d %d", &money1, &money2);
	Calculate(money1, money2);
	system("pause");
	return 0;
}