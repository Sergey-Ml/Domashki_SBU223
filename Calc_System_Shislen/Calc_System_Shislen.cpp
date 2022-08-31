#include <iostream>
#include <iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "                 Системы счисления  \n\n";
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "     Введите десятичное число:  ";
	int vvod, temp16, temp2, array_2[10], array_16[10], j = 0;
	cin >> vvod;
	temp16 = vvod;
	cout << " Число " << temp16 << " в шестнадцатиричной  системе :  ";
	do {
		array_16[j++] = temp16 % 16;
		temp16 /= 16;

	} while (temp16 != 0);
	for (int i = j - 1; i > -1; i--)
	{
		cout << array_16[i];

	}

	cout << endl;
		cout << " Число " << vvod << " в двоичной системе :  ";
		temp2 = vvod;
		array_2[j] = {0};
		do {
			array_2[j++] = temp2 % 2;
			temp2 /= 2;

		} while (temp2 != 0);
		for (int i = j - 1; i > -1; i--)
		{
			cout << array_2[i];

		}

		cout << endl;
}



