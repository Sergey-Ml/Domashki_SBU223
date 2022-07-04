#include <iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; // код клавиши
	char oper; // оперетор 
	double num1 = 0.0, num2 = 0.0; // Вводимые числа

	cout << OFFSET << "=============================================\n\n";
	cout << OFFSET << " ПРОСТОЙ КАЛЬКУЛЯТОР (Милькин Сергей СБУ_223)\n\n";
	cout << OFFSET << "=============================================\n\n";
	cout << "\t\t\t\t\t" << "  Введите выражение и нажмите Enter\n";
	cout << "\t\t\t\t\t" << " Для выхода из программы нажмите Esc\n\n";
	do
	{
		cin >> num1;
		cin >> oper;
		cin >> num2;

		switch (oper)

		{
		case '+':
			cout << "--------------------------------------------\n";
			cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
			cout << "--------------------------------------------\n";
			break;

		case '-':
			cout << "--------------------------------------------\n";
			cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
			cout << "--------------------------------------------\n";
			break;

		case '*':
			cout << "--------------------------------------------\n";
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
			cout << "--------------------------------------------\n";
			break;

		case '/':
			if (num2 != 0)
			{
				cout << "--------------------------------------------\n";
				cout << num1 << ":" << num2 << "=" << num1 / num2 << endl;
				cout << "--------------------------------------------\n";
			}
			else
				cout << "Делить на 0 нельзя!";

			break;

		default:
			cout << "Неизвестный оператор";
			break;
		}
		key = _getch();
	} while (key != 27);

}


