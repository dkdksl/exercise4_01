/*
����:
�� ������ �Է� �޾� �� ������ +,-,*�� ����� ��ȯ�ϴ� �Լ� 3���� ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ������ ���Ͽ�(ū��)-(���� ��)�� �����Ͻÿ�.

�Է�:�� ���� �Է�
���:�Է� ���� �� ������ +,-,* ���갪 ���

���� �Է�1
2 5
���� ���1
7 3 10
*/
#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {	return (a + b);}
int sub(int a, int b) {
	if (a > b) return (a - b);
	else return (b - a);
}
int Multiple(int a, int b) { return (a*b); }

int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	c = add(a, b);d = sub(a, b);e = Multiple(a, b);
	printf("%d %d %d\n", c, d, e);
	system("pause");
	return 0;
}