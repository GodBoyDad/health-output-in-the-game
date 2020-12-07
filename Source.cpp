#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int level, clevel, hp;
	hp = 100;
	cout << "Health indicator: " << hp << endl;
	level = 0;
	cout << "Do the action: " << endl;
	cin >> clevel;

	hp = 70;
	if (level == clevel)
		cout << "Move on: " << endl;
	else if (level - clevel > 10)
		cout << "End of game, restart..." << endl;

	else if (level > clevel)

		cout << "This is how much health remains after falling on thorns: " << hp << endl;

	else
		cout << "You jumped over thorns " << endl;

}