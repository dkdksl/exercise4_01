/*
����� �� ������ ���߾� ������>>24
���߾�� �� ������ �Է��� 24���� Ů�ϴ�.
����� �� ������ ���߾� ������>>26
���߾�� �� ������ �Է��� 26���� �۽��ϴ�.
����� �� ������ ���߾� ������>>25
*/
#include <stdio.h>
#include <stdlib.h>
void func(int x) {
	int number=0;
	while (number != x) {
		printf("�� ������ ���߾� ������>>");
		scanf("%d", &number);
		printf("\n");
		if (number < x) printf("���߾�� �� ������ �Է��� %d���� Ů�ϴ�\n", number);
		else if (number > x) printf("���߾�� �� ������ �Է��� %d���� �۽��ϴ�\n", number);
		else printf("�����Դϴ�.\n");
	}
}
int main(void) {
	func(25);
	system("pause");
	return 0;
}