﻿//Палиндром
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши (для выхода из прогр)
	int x, z, otvet; // Вводимое число
	cout << OFFSET << "==============================================================\n\n";
	cout << OFFSET << "     ПРОГРАММЫ ПАЛИНДРОМ  и СЧАСТЛИВЫЙ БИЛЕТИК\n";
	cout << OFFSET << "        Милькин Сергей, группа СБУ223)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t\t\t\t\t" << "Выберите пункт меню и нажмите Enter\n";
	cout << "\t\t\t\t\t" << "  Для выхода из программы нажмите Esc\n\n";


	do
	{
		cout << OFFSET << "==============================================================\n\n";
		cout << OFFSET << " 1.    Узнать является ли Ваше число Палиндром\n\n";
		cout << OFFSET << " 2.    Узнать счастливый ли у Вас Билетик\n\n";
		cout << OFFSET << " Esc.  Выход\n\n";
		cout << OFFSET << "==============================================================\n\n\n";

		otvet = _getch() - 48;
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "==============================================================\n\n";
				cout << OFFSET << "                  Палиндром или нет?\n\n";
				cout << OFFSET << "==============================================================\n\n\n";
				cout << "\t\t\t\t" << "Для определения палиндрома ввдите простое число и нажмите Enter\n";
				cout << "\t\t\t\t\t" << "  Для выхода из программы нажмите Esc\n\n";
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
			}
		}

		if (otvet == 2)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "==============================================================\n\n";
				cout << OFFSET << "                Есть ли удача по жизни?\n\n";
				cout << OFFSET << "==============================================================\n\n\n";
				cout << "\t\t\t\t" << "Для определения Счасливого Билетика введите его номер и нажмите Enter\n";
				cout << "\t\t\t\t\t" << "  Для выхода из программы нажмите Esc\n\n";
				cout << "Введите номер билета (шесть цифр): ";
				int x1, x2, x3, x4, x5, x6;
				cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
				if (x1 + x2 + x3 == x4 + x5 + x6)
				{
					cout << "Вам повезло!!! Счастливый Билетик\n";
				}
				else {
					cout << "Не расстраивайтесь, Вам обязательно повезет в любви!\n";
				}
			}

		}
		key = _getch();
	} while (key != 27);
}
