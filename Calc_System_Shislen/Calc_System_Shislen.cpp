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
	int vvod, temp16, array_2[10], array_16[10], j = 0;
	int temp2;
	//char array_16[10];
	cin >> vvod;
	temp16 = vvod;
	cout << " Число " << temp16 << " в шестнадцатиричной  системе :  " << "0x";
	do {
		array_16[j++] = temp16 % 16;
		temp16 /= 16;


	} while (temp16 != 0);
	//setlocale(LC_ALL, "C");

	

	for (int i = j - 1; i >= 0; i--)
	{
		temp2 = array_16[i];
		if (temp2 == 10) cout << char(65);
		else if (temp2 == 11) cout << char(66);
		else if (temp2 == 12) cout << char(67);
		else if (temp2 == 13) cout << char(68);
		else if (temp2 == 14) cout << char(69);
		else if (temp2 == 15) cout << char(70);
		else cout << temp2;
	}
	

	
	cout << endl;





		/*cout << endl;
			cout << " Число " << vvod << " в двоичной системе :  ";
			temp2 = vvod;
			array_2[j] = {0};
			do {
				array_2[j++] = temp2 % 2;
				temp2 /= 2;

			} while (temp2 != 0);
			for (int i = j - 1; i >=0; i--)
			{
				cout << array_2[i];

			}

			cout << endl;*/
		

}