//Shooter
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
void main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Будет хранить код клавиши
	cout << OFFSET << "=============+++==============================================\n\n";
	cout << OFFSET << "     ПРОГРАММА 3Dschooter (Милькин Сергей, группа СБУ223)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t" << "У меня Windows стоит на MacBook, поэтому клавиши и их коды для русской раскладки могут не совпадать с Вашими\n";
	cout << "\t\t\t\t\t" << "  Для выхода из программы нажмите Esc\n\n";
	do
	{
		key = _getch();

		switch (key)
		{
		case 'w':
			cout << key << " - Игрок сделал шаг вперед\t" << endl;
			break;

		case 'ж':
			cout << key << " - Игрок сделал шаг вперед (на русской раскладке)\t" << endl;
			break;
		case 's':
			cout << key << " - Игрок сделал шаг назад \t" << endl;
			break;

		case 'л':
			cout << key << " - Игрок сделал шаг назад (на русской раскладке)\t" << endl;
			break;
		case 'a':
			cout << key << " - Игрок сделал шаг влево\t" << endl;
			break;

		case 'д':
			cout << key << " - Игрок сделал шаг влево (на русской раскладке)\t" << endl;
			break;

		case 'd':
			cout << key << " - Игрок сделал шаг вправо\t" << endl;
			break;

		default:
			if (key != 32)
			{
				if (key != 13)
				{
					if (key != -94)
						cout << key << " - у игрока истерика : жмёт все подряд\t" << endl;
					else
						cout << key << " - Игрок сделал шаг вправо (на русской раскладке)\t" << endl;
				}

				else
					cout << "Enter - Игрок выстрелил\t" << endl;
			}
			else
				cout << "Пробел - Игрок прыгнул\t" << endl;

		}


	} while (key != 27);
}

