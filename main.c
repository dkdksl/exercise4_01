/*
40km�� 400km�� ���� ����(mile) ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, 1km�� 0.621371����(mile) �̴�.
40km, 400km�� ���� ������ ��ȯ �� ���� ����Ѵ�.
�Է� ����
���� ���
40km to mile : 24.854840
400km to mile : 248.548400

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double convertMile = 0.621371;
	int A;
	A = 40;
	printf("\n%dkm to mile : %f\n", A, A* convertMile);

	A = 400;
	printf("\n%dkm to mile : %f\n", A, A* convertMile);

	system("pause");
	return 0;
}