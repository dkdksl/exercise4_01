#include <stdio.h>
#include <stdlib.h>
#define MAX 50

//���� : https://4369.tistory.com/entry/scanf����-������-������-���ڿ���-�޴�-���
int main(void) {
	int i;
	char aStr[MAX] = { 0x00, };
	char b = 0x00;
	scanf("%[^\n]s", aStr);  //EnterŰ ������ �Է¹���.
	getchar();
	scanf("%c", &b);

	for (i = 0;i < MAX;i++) {
		if (b == aStr[i]) {
			printf("���� %c�� �ε��� ��ġ�� %d�Դϴ�.\n", b, i);
			break;
		}
	}
	system("pause");
	return 0;
}