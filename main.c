#include <stdio.h>
#include <stdlib.h>
#define CRTSECURENOWARNINGS

int main(void)
{
	char n1, n2;
	do
	{
		printf("������ ���ڸ� �ϳ��� �Է��ϼ���: ");
		scanf("%c", &n1);
		getchar(); //�̰� �ٽ���.  ���� : https://studyc.tistory.com/9
		if (n1 == 'Q') {
			break;
		}
		else {
			if (n1 >= 'A' && n1 <= 'Z')
				n2 = n1 + 32;
			else if (n1 >= 'a' && n1 <= 'z')
				continue;
			printf("�Է��Ͻ� ���� '%c'�� ���� �빮�� �̸� ��ȯ�ϸ� '%c'�Դϴ�.", n1, n2);
		}
		printf("\n");
	} while (1);

	system("pause");
	return 0;
}