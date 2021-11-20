#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define WORD_MAX 100
// ���� 1 : https://dojang.io/mod/page/view.php?id=446
struct wordScore {
	char aStr[WORD_MAX]; // �ܾ� ����
	int score;           // ���� ����   
};

int main(void) {
	int i, j, k, n, cnt;
	struct wordScore ws[MAX];    // ũ�Ⱑ 10�� ����ü �迭 ����
	struct wordScore tmp;
	//10���� �ܾ� �Է¹ޱ�
	for (i = 0;i<MAX;i++){
		scanf("%s", ws[i].aStr);     // ǥ�� �Է��� �޾Ƽ� �迭 ������ ���ڿ��� ����
	}
	//�빮�� ����,       �ҹ��� ���߿�... �Էµ� ���� ī����
	// 65~90    (�� 32)     97~122
	for (n = 0;n < MAX; n++) {
		cnt = 0;
		for (i = 0;i <= 32; i = i + 32) {
			for (j = 65 + i;j <= 90 + i; j++) {
				for (k = 0;k < WORD_MAX;k++)
					if (j == (int)ws[n].aStr[k]) {
						cnt = cnt + (j - 64 - i);
						//printf("%c : %d\n", ws[n].aStr[k], (j - 64 - i));
					}
			}
		}
		ws[n].score = cnt;
		//if (cnt > 0) printf("%s : %d\n", aStr[n], cnt);
	}
	//score ������ ����
	for (i = 0;i < MAX;i++) {
		for (j = i + 1; j < n; j++) {
			if (ws[i].score < ws[j].score) {
				tmp = ws[i];
				ws[i] = ws[j];
				ws[j] = tmp;
			}
		}
	}
	for(i=0;i<MAX;i++)
		printf("%s : %d\n", ws[i].aStr, ws[i].score );

	system("pause");
	return 0;
}

