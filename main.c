#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���� : https://dojang.io/mod/page/view.php?id=337
int main(void) {
	char *s1; //�迭 �̸��� ������ ������
	int n;     //�迭�� ũ�⸦ ���� ����
	scanf("%d", &n);

	s1 = (char *)malloc(sizeof(char) * (n+1)); //char �� �迭�� n���� ũ��� ����
	scanf("%s", s1);

	//for (int i = 0; i < n; i++) printf("%c", s1[i]);
	printf("%s\n", s1);

	free(s1);
	system("pause");
	return 0;
}