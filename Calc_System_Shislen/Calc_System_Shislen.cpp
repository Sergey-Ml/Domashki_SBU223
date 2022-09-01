#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; // код клавиши
	int otvet; // пункт меню
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "                Калькулятор (системы счисления)  \n\n";
	cout << OFFSET << "===============================================================\n\n";
	cout << "\t\t\t\t\t" << " Выберите пункт меню и нажмите ENTER\n";
	cout << "\t\t\t\t\t" << " Для выхода из программы нажмите Esc\n\n";

	do
	{
		cout << OFFSET << "===============================================================\n\n";
		cout << OFFSET << "1.   Перевод из десятичной в двоичную (10 --> 1010)\n\n";
		cout << OFFSET << "2.   Перевод из десятичной в шестнадцатиричную (10 --> 0xA)\n\n";
		//cout << OFFSET << "3.   Перевод из двоичной в десятичную (1010 --> 10)\n\n";
		//cout << OFFSET << "4.   Перевод из шестнадцатиричной в десятичную (0xA --> 10)\n\n";
		cout << OFFSET << "Esc. Выход\n\n";
		cout << OFFSET << "===============================================================\n\n";
		otvet = _getch() - 48;

		// Задача 1
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "     Введите десятичное число:  ";

				int vvod, temp, j = 0, array[10];
				cin >> vvod;
				temp = vvod;
				cout << OFFSET << " Число " << temp << " в двоичной системе :  ";


				do {
					array[j++] = temp % 2;
					temp /= 2;

				} while (temp != 0);
				for (int i = j - 1; i >= 0; i--)
				{
					cout << array[i];

				}
				cout << endl;
			}
		}
		// Задача 2
		if (otvet == 2)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "     Введите десятичное число:  ";

				int vvod, temp, _16, j = 0, array[10];
				cin >> vvod;
				temp = vvod;
				cout << OFFSET << " Число " << temp << " в шестнадцатиричной  системе :  " << "0x";
				do {
					array[j++] = temp % 16;
					temp /= 16;


				} while (temp != 0);


				for (int i = j - 1; i >= 0; i--)
				{
					_16 = array[i];
					if (_16 == 10) cout << char(65);
					else if (_16 == 11) cout << char(66);
					else if (_16 == 12) cout << char(67);
					else if (_16 == 13) cout << char(68);
					else if (_16 == 14) cout << char(69);
					else if (_16 == 15) cout << char(70);
					else cout << _16;
				}

				cout << endl;
			}


		}
		key = _getch();
	} while (key != 27);

}