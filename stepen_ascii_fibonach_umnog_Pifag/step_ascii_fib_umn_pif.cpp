#include <iostream>
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
		key = _getch();
	} while (key != 27);
}
