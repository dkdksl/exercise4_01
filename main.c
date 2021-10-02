/*

�Է� : ���� ��ǥ(x,y)�� �ٸ� ������ ��ǥ(x1,y1),(x2,y2)�� �Է¹޴´�
��� : �˻��Ͽ� ���簢�� ���� �ش����� �ִٸ� True�� ���, �ƴ϶�� False�� ���

�����Է�1
10 10
100 100 200 200
�������1
False

�����Է�2
100 100
100 100 200 200
�������2
True

�����Է�3
150 150
100 100 200 200
�������3
True

�����Է�4
200 200
100 100 200 200
�������4
True

*/


#include <stdio.h>
#include <stdlib.h>

// ���ϰ��� 0 �̸� FALSE , 1�̸� TRUE
// �Լ� ���� ��ó : http://m.todayhumor.co.kr/view.php?table=programmer&no=11164
int IsPointInRect(int x, int y, int x1, int y1, int x2, int y2) {
	return (x >= x1 
		 && x <= x2
		 && y >= y1
		 && y <= y2);
}

int main(void) {
	int x, y;
	int x1, y1, x2, y2;
	//printf("���� �·�(x, y)�� �Է����ּ���.\n");
	scanf("%d %d", &x, &y);
	//printf("�ٸ� ������ ��ǥ(x1, y1), (x2, y2) ��ǥ�� �Է����ּ���.\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if (IsPointInRect(x, y, x1, y1, x2, y2)) {
		printf("True\n");//printf("���� ���簢�� ���ο� �ֽ��ϴ�. \n");
	} else {
		printf("False\n");//printf("���� ���簢�� �ܺο� �ֽ��ϴ�. \n");
	}

	system("pause");
	return 0;
}