#include <stdio.h>
#include <stdlib.h>
#include "myString.h"  //����� ���� �Լ�

int main(void) {
	char *x = malloc(sizeof(char) * 3), *y = malloc(sizeof(char) * 3);
	scanf("%s %s", x, y);
	
	printf("%d\n", strcmp(x, y));

	free(x);
	free(y);
	system("pause");
	return 0;
}