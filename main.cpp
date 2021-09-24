#include <iostream>
using namespace std;

class CoffeeMachine {
public:
	int Coffee;
	int Water;
	int Sugar;
	CoffeeMachine();
	CoffeeMachine(int C, int W, int S);
	int drinkAmericano();
	int drinkSugarCoffee();
	int drinkEspresso();
	int show();
	int none();
	int fill();
};

CoffeeMachine::CoffeeMachine() {
	Coffee = 0;
	Water = 0;
	Sugar = 0;
}

CoffeeMachine::CoffeeMachine(int C, int W, int S) {
	Coffee = C;
	Water = W;
	Sugar = S;
}

int CoffeeMachine::show() {
	cout << "Ŀ�Ǹӽ� ���� : Ŀ�� = " << Coffee << "�� = " << Water << "���� = " << Sugar << endl;
	return Coffee; //��ȯ�� ���� ������ �߰�
}

int CoffeeMachine::none() {
	if (Coffee < 0)
	{
		Coffee += 1;
		return 1;
	}
	if (Water < 0)
	{
		Water += 1;
		return 1;
	}
	if (Sugar < 0)
	{
		Sugar += 1;
		return 1;
	}
	return 0;
}

int CoffeeMachine::drinkAmericano() {
	Coffee -= 1;
	Water -= 2;
	if (none() == 1)
	{
		cout << "��ᰡ �����Ͽ� �Ƹ޸�ī�븦 ���� �� �����ϴ�." << endl;
		show(); //show;//����	C3867	'CoffeeMachine::show': ��ǥ�� �����Դϴ�. '&'�� ����Ͽ� ��� �����͸� ���弼��.	CoffeeMachine	main.cpp	60	
	}
	return Coffee;// ��ȯ�� ������ ���� �߰�
}

int CoffeeMachine::drinkSugarCoffee() {
	Coffee -= 1;
	Water -= 2;
	Sugar -= 1;
	if (none() == 1)
	{
		cout << "��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		show();//show;
	}
	return Coffee; //��ȯ�� ���� ����ü �߰�
}

int CoffeeMachine::drinkEspresso() {
	Coffee -= 1;
	Water -= 1;
	if (none() == 1)
	{
		cout << "��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		show();//show;
	}
	return Coffee; //��ȯ�� ��������ü �߰�
}

int CoffeeMachine::fill() {
	Coffee = 10;
	Water = 10;
	Sugar = 10;
	return Coffee; //��ȯ�� ���������� �߰�
}

int main() {
	CoffeeMachine java(5, 8, 2);
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.drinkEspresso();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.drinkSugarCoffee();
	java.drinkAmericano();
	java.fill();
	java.show();

	system("pause"); //����â ����� Ű���������� ���߰� �ϴ� �Լ���� �߰�
	return 0;
}