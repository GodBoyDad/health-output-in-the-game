#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int level, clevel, hp;
	hp = 100;
	cout << "Показатель здоровья : " << hp << endl;
	level = 0;
	cout << "Сделайте действие " << endl;
	cin >> clevel;

	hp = 70;
	if (level == clevel)
		cout << "Идём дальше" << endl;
	else if (level - clevel > 10)
		cout << "Конец игры, перезагрузка" << endl;

	else if (level > clevel)

		cout << "Столько остается здоровья после падения на колючки: " << hp << endl;

	else
		cout << "Вы перепрыгнули колючки " << endl;

}