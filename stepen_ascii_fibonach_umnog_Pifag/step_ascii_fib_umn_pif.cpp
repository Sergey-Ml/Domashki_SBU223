﻿#include <iostream>
#include <conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
//#define Stepen
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; // код клавиши
	int otvet; // пункт меню
	cout << OFFSET << "==============================================================\n\n";
	cout << OFFSET << "     Домашка (Милькин Сергей, группа СБУ223)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t\t\t\t\t" << "  Выберите пункт меню и нажмите Enter\n\n";
	cout << "\t\t\t\t\t" << "  Для выхода из программы нажмите Esc\n\n";
	do
	{
		cout << OFFSET << "==============================================================\n\n";
		cout << OFFSET << " 1.    Возвести число в степень\n\n";
		cout << OFFSET << " 2.    Вывести ASCII - таблицу\n\n";
		cout << OFFSET << " 3.    Ряд Фибоначчи до указанного предела\n\n";
		cout << OFFSET << " 4.    Заданное кол-во чисел ряда Фибоначчи\n\n";
		cout << OFFSET << " 5.    Ряд простых чисел до указанного предела\n\n";
		cout << OFFSET << " 6.    Таблица умножения\n\n";
		cout << OFFSET << " 7.    Таблица Пифагора\n\n";
		cout << OFFSET << " Esc.  Выход\n\n";
		cout << OFFSET << "==============================================================\n\n";

		// Первая задача - степень числа
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
				cout << OFFSET << "                     СТЕПЕНЬ ЧИСЛА\n\n";
				cout << OFFSET << "==============================================================\n\n";
				cout << "\t\t\t\t\t" << "  Введите число и степень: \n\n";
				double chislo;
				int stepen;
				cin >> chislo >> stepen;
				double result = chislo;

				if (stepen > 0)
				{
					for (int i = 1; i < stepen; i++)
					{
						result *= chislo;

					}
					cout << "\t\t\t\t\t\t" << chislo << " ^ " << stepen << " = " << result << "\n";
				}
				if (stepen < 0)
				{
					for (int i = 1; i < -stepen; i++)
					{
						result *= chislo;

					}

					cout << "\t\t\t\t\t\t" << chislo << " ^ " << stepen << " = " << "1/" << result << " = " << 1 / result << endl;
				}
				if (stepen == 0 && stepen == -0)
				{
					cout << "\t\t\t\t\t" << " Любое число в нулевой степени равняется единице\n";
				}
			}
		}

		// Вторая задача ASCII - таблица
		// Уточнить, страшная она какая-то получилась
		if (otvet == 2)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "==============================================================\n\n";
				cout << OFFSET << "           ASCII - таблица по 16 символов в строке\n\n";
				cout << OFFSET << "==============================================================\n\n";

				char key;

				for (int i = 0; i <= 16; i++)
				{
				

					for (int j = 0; j <= 16; j++)

					{
						key = i * j;
						
						cout << key << "\t";
					}
					cout << endl;

				}

			}
		}
		// Третья задача - ряд Фибоначчи до указанного предела
		if (otvet == 3)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "==============================================================\n\n";
				cout << OFFSET << "           Ряд Фибоначчи до указанного предела\n\n";
				cout << OFFSET << "==============================================================\n\n";
				int t1 = 0, t2 = 1, tn = 0, n;
				cout << "Введите число: ";
				cin >> n;
				
				if (n < 0)
					n = -n;
				cout  << "Последовательность Фибоначчи до "<< n <<" : " << t1 << " " << t2 << " ";
				tn = t1+t2;
				while (tn <= n)
				{
					cout << tn << " ";
					t1 = t2;
					t2 = tn;
					tn = t1+t2;

					
				}
				cout << endl;
			}
		}
		// Задача 4 - Заданное кол-во чисел из ряда Фибоначчи
		if (otvet == 4)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "==============================================================\n\n";
				cout << OFFSET << "           Заданное кол-во чисел ряда Фибоначчи\n\n";
				cout << OFFSET << "==============================================================\n\n";
				int t1 = 0, t2 = 1, tn = 0, n;
				cout << "Введите количество чисел: ";
				cin >> n;

				if (n < 0)
					n = -n;
				cout << "Последовательность Фибоначчи из " << n << " чисел : " << t1 << "    " << t2 << "  ";
				for (int i = 1; i <= n-2; i++) {


					if (n == 1)
						cout << "  " << t1;
					if (n == 2)
						cout << "  " << t2;
					tn = t1 + t2;
					t1 = t2;
					t2 = tn;
					cout <<"  " << tn << "  ";

				}
				cout << endl;
			}
		}

		
		key = _getch();
	} while (key != 27);
}
