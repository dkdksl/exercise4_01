#include <stdio.h>
#include <stdlib.h>
//����1 : https://dojang.io/mod/page/view.php?id=320
//����2 : https://banzi.tistory.com/entry/���α׷�-��-��-�������-�Է¹޾�-��-���ϴ�-���α׷�23�������
int main(void) {
	int **arr_A, **arr_B, **arr_C;
	int n;
	scanf("%d", &n);
	arr_A = (int **)calloc(n+1, sizeof(int));
	for (int i = 0;i < n; i++)
		arr_A[i] = (int *)calloc(n, sizeof(int));
	arr_B = (int **)calloc(n+1, sizeof(int));
	for (int i = 0;i < n; i++)
		arr_B[i] = (int *)calloc(n, sizeof(int));

	arr_C = (int **)calloc(n+1, sizeof(int));
	for (int i = 0;i < n; i++)
		arr_C[i] = (int *)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++)    // ���� ũ�⸸ŭ �ݺ�
		for (int j = 0; j < n; j++)    // ���� ũ�⸸ŭ �ݺ�
			scanf("%d", &arr_A[i][j]);

	for (int i = 0; i < n; i++)    // ���� ũ�⸸ŭ �ݺ�
		for (int j = 0; j < n; j++)    // ���� ũ�⸸ŭ �ݺ�
			scanf("%d", &arr_B[i][j]);

	// ����� ���� ��� & ����
	int i, j, k;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			for (k = 0;k < n; k++)
				arr_C[i][j] += arr_A[i][k] * arr_B[k][j];

	printf("\n");
	for (int i = 0; i < n; i++)    // ���� ũ�⸸ŭ �ݺ�
		for (int j = 0; j < n; j++)    // ���� ũ�⸸ŭ �ݺ�
			printf("%d ", arr_C[i][j]);
		printf("\n");

/*
	for (int i = 0; i < n; i++)    // ���� ũ�⸸ŭ �ݺ�
		for (int j = 0; j < n; j++)    // ���� ũ�⸸ŭ �ݺ�
			printf("%d ", arr_A[i][j]);
		printf("\n");

	for (int i = 0; i < n; i++)    // ���� ũ�⸸ŭ �ݺ�
		for (int j = 0; j < n; j++)    // ���� ũ�⸸ŭ �ݺ�
			printf("%d ", arr_B[i][j]);
		printf("\n");
*/

	for (int i = 0; i < n; i++)    // ���� ũ�⸸ŭ �ݺ�
	{
		free(arr_A[i]);                  // 2���� �迭�� ���� ���� �޸� ����
		free(arr_B[i]);
		free(arr_C[i]);
	}

	free(arr_A);    // 2���� �迭�� ���� ���� �޸� ����
	free(arr_B);    // 2���� �迭�� ���� ���� �޸� ����
	free(arr_C);    // 2���� �迭�� ���� ���� �޸� ����

	system("pause");
	return 0;
}