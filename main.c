#define CRTSECURENOWARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inputWords(char* words[], char contents[]) {
	char* word;
	word = contents;
	words[0] = (char)calloc(strlen(contents) + 1, sizeof(char)); //words = (char)calloc(strlen(contents) + 1, sizeof(char));
	// �Ҵ����� �޸𸮴� �� 12����Ʈ
	strcpy(&words[0], word); // strcpy(words, word);
}

int main(void){

	char* arrptr[3];
	inputWords(arrptr, "hello world");

	printf("(1)%s\n", arrptr);
	// arrptr[0]���� ����Ű�°� "hello world"

	printf("(2)%d\n", sizeof("hello world"));
	// �翬�� 12�� ����

	printf("(3)%d\n", sizeof(*arrptr));   // 4
	// "hello world"�� ũ��ϱ�... 12�� ��������...? �� 4�� ������
	printf("(4)%d\n", sizeof(arrptr));   // 12 

	//arrptr[0] ���� �����ϱ�
	printf("(5)%d\n", strlen(&arrptr[0])+1); //12
	// strlen �� ���ڿ� ������ NULL���� ������ ũ����.
	// sizof �� ���ڿ��� ���̸� �����ö��� ���ڿ� ������ NULL���� ������ ũ����.

	printf("(6)%s\n", &arrptr[0]); // hello world

	system("pause");
	return 0;
}

