#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int level, clevel, hp;
	hp = 100;
	cout << "���������� �������� : " << hp << endl;
	level = 0;
	cout << "�������� �������� " << endl;
	cin >> clevel;

	hp = 70;
	if (level == clevel)
		cout << "��� ������" << endl;
	else if (level - clevel > 10)
		cout << "����� ����, ������������" << endl;

	else if (level > clevel)

		cout << "������� �������� �������� ����� ������� �� �������: " << hp << endl;

	else
		cout << "�� ������������ ������� " << endl;

}