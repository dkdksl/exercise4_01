#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input=-2, n, m, i, b[10] = { 0, };

	while (input != -1)
	{
		scanf_s("%d", &input);
		n = 0;m = -1; //�ʱ�ȭ 
		//10���� ������ ��� ������
		if (input > 9) {
			n = input / 10; //��
			m = input % 10; //������
		}
		else {
			m = input;
		}
		
		if (n > 0) 
			b[n] = b[n] + 1;
		if (m>-1)
			b[m] = b[m] + 1;
	}

	for (i = 0;i < 10; i++) {
		printf("%d:%d\n", i, b[i]);
	}

	system("pause");
	return 0;
}

