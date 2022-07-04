//Палиндром
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши (для выхода из прогр)
	int x, z; // Вводимое число
	cout << OFFSET << "=============+++==============================================\n\n";
	cout << OFFSET << "     ПРОГРАММА ПАЛИНДРОМ (Милькин Сергей, группа СБД121)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t\t\t\t" << "Для определения палиндрома ввдите простое число и нажмите Enter\n";
	cout << "\t\t\t\t\t" << "  Для выхода из программы нажмите Esc\n\n";
	do
	{
		cout << "Введите простое число n и нажмите Enter:";
		cin >> x;
		z = x;
		int y = 0;
		while (x != 0)
		{
			y *= 10;
			y += x % 10;
			x = x / 10;
		}
		if (z == y)
			cout << "Введенное число " << z << " - палиндром" << endl;
		else
			cout << "Введенное число " << z << " - обычное" << endl;

		key = _getch();
	} while (key != 27);
}
