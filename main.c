/*
� �ǹ��� ���������ʹ� �ִ� 190Kg���� ����� ž���� �� �ִ�.
�达�� �����Դ� 70Kg�̰�, �Ѿ��� �����Դ� 80Kg�̶�� ����.
�� �� ����� ���ÿ� ���������Ϳ� ž���� �������� �˱� ���� �� �����Ը� ����ϰ��� �Ѵ�.
�� ����� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.��, 3���� �������� ����Ͻÿ�.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float elevatorMAX = 190.0; //���� 1
	float KimKG = 70.0;        //���� 2     
	float HanKG = 80.0;        //���� 3 
    
	printf("\n�λ���� ������ �� = %f KG ", (KimKG + HanKG));
	if (elevatorMAX >= (KimKG + HanKG) ) {
		printf("\n elevator (%f KG) ž�� ����\n", elevatorMAX);
	}else{
		printf("\n elevator (%f KG) ž�� �Ұ�\n", elevatorMAX);
	}
	system("pause");
	return 0;
}