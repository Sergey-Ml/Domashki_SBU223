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
		cout << OFFSET << "3.   Перевод из двоичной в десятичную (1010 --> 10)\n\n";
		cout << OFFSET << "4.   В разработке перевод из шестнадцатиричной в десятичную (0xA --> 10)\n\n";
		cout << OFFSET << "             (пока не работает с Буквами ABCDE) \n\n";
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
				cout << OFFSET << " Введите десятичное число:  ";

				int vvod, temp, j = 0, array[10];
				cin >> vvod;
				temp = vvod;
				cout << OFFSET << " Десятичное число " << temp << " в двоичной системе будет:  ";

				// делим на основание до нуля и загоняем в массив остатки от деления
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
				cout << OFFSET << " Введите десятичное число:  ";

				int vvod, temp, _16, j = 0, array[10];
				cin >> vvod;
				temp = vvod;
				cout << OFFSET << " Десятичное число " << temp << " в шестнадцатиричной  системе будет:  " << "0x";

				// все тоже самое, только меняем в массиве цифры на буквы  
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
		// Задача 3
		if (otvet == 3)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << " Введите двоичное число:  ";

				int vvod, temp, razr = 0, j = 0, array[10], sum = 0, result = 1, exp;
				cin >> vvod;
				temp = vvod;
				cout << OFFSET << " Двоичное число " << temp << " в десятичной системе будет :  ";
				//кол-во разрядов во введенном числе
				while (vvod != 0)
				{
					vvod /= 10;
					++razr;
				}
				//cout << razr << "|";

				//cout << endl;
				// загоняем введенное число в массив
				do
				{
					array[j++] = temp % 10;
					temp /= 10;

				} while (temp != 0);

				exp = razr - 1;

				for (int i = j - 1; i >= 0; i--)

				{
					result = pow(2, exp);

					////////////////////////////////////////////////////////////////////////////
					// Разобраться почему не работает!!
					// Спросить у Олега Анатольевича где косячу
					// 
					//while (exp != 0)
					//{
					//	result *= 2;
					//	--exp;
					//}
					///////////////////////////////////////////////////////////////////////////
					--exp;
					array[i] *= result;
					//cout << array[i] << " + ";

				}

				//cout << endl;

				for (int i = 0; i < razr; i++)
				{
					sum += array[i];

				}

				cout << sum << endl;
			}

		}

		// Задача 4

		if (otvet == 4)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << " Введите шестнадцатиричное число без 0х: ";

				int vvod, temp, razr = 0, j = 0, array[10], sum = 0, result = 1, exp, _16;
				char vvod1;
				cin >> vvod;
				temp = vvod;
				cout << OFFSET << " Шестнадцатиричное число " << temp << " в десятичной системе будет :  ";
				////////////////////////////////////////////////////////////
				// 
				// Подумать как загнать число в массив с буквами
				// (спросить у Олега Анатольевича)
				// 
				// 
				// /////////////////////////////////////////////////////////
				// загоняем введенное число в массив
				do
				{
					array[j++] = temp % 10;
					temp /= 10;

				} while (temp != 0);


				//кол-во разрядов во введенном числе
				while (vvod != 0)
				{
					vvod /= 10;
					++razr;
				}
				//cout << razr << "|" << endl;

				//cout << endl;
				exp = razr - 1;

				for (int i = j - 1; i >= 0; i--)

				{
					//cout << array[i] << " - " << endl;

					result = pow(16, exp);
					array[i] *= result;
					--exp;
					//cout << array[i] << " + ";

				}

				//cout << endl;

				for (int i = 0; i < razr; i++)
				{
					sum += array[i];
					//cout << sum << endl;
				}

				cout << sum << endl;

			}
		}

		key = _getch();
	} while (key != 27);
}

