#include <stdio.h>
#include <stdlib.h>

//���� : https://rebas.kr/10
void secondConv(int second) {
	int sec, min, hour;
	sec = second;
	min = sec / 60;  // �Է¹��� sec�� 60���� ������ ��(min)
	hour = min / 60; // min�� ���� 60���� ������ ��(hour)

	sec = sec % 60;  // �ú��ʷ� �ٲ��ִ� ���̹Ƿ�, sec�� 60���� ���� �� �������� ���� ��
	min = min % 60; //  min�� 60���� ���� �� �������� ���� ��

	if (hour > 0) { printf("%d�ð� ", hour); }
	if (min > 0) { printf("%d�� ", min); }
	if (sec > 0) { printf("%d�� ", sec); }
	printf("\n");
}
int main(void) {
	int second;
	scanf("%d", &second); //�� �Է�
	secondConv(second);

	system("pause");
	return 0;
}