#include <stdio.h>
#include <stdlib.h>

//����1 : https://dojang.io/mod/page/view.php?id=337
//����2 : https://m.blog.naver.com/timesea821/220971085446

int main(void) {
	char *s1; //�迭 �̸��� ������ ������
	int n;     //�迭�� ũ�⸦ ���� ����
	scanf("%d", &n);

	s1 = (char *)calloc(n+1,sizeof(char)); //char �� �迭�� n���� ũ��� ����
	scanf("%s", s1);

	//for (int i = 0; i < n; i++) printf("%c", s1[i]);
	printf("%s\n", s1);

	free(s1);
	system("pause");
	return 0;
}
