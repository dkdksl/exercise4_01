/*
�Ʒ� ó�� ��°���� ǥ�õǵ���

buy list
-----------------
carrot    1000won
toy       20000won
clothes   430000won
*/

#include <stdio.h>
#include <stdlib.h>

struct sBuylist {   // ����ü ����
	int carrot;  // ����ü ��� 1 
	int toy;     // ����ü ��� 2
	int clothes; // ����ü ��� 3
};

int main(void) {

	struct sBuylist buylist;

	buylist.carrot    = 1000;
	buylist.toy      = 20000;
	buylist.clothes = 430000;

	printf("buy list\n");
	printf("-----------------\n");
	printf("carrot    %dwon\n", buylist.carrot);
	printf("toy       %dwon\n", buylist.toy);
	printf("clothes   %dwon\n", buylist.clothes);

	system("pause");
	return 0;
}