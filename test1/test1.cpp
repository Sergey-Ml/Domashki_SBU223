#include <iostream>
using namespace std;
#include <math.h>
int main()

{
	setlocale(LC_ALL, "Russian");

	cout << "Введите шестнадцатиричное число:  ";

	int vvod, temp, razr = 0, j = 0, array[10], sum = 0, result = 1, exp, _16;
	char vvod1;
	cin >> vvod;
	temp = vvod;
	cout << " Шестнадцатиричное число " << temp << " в десятичной системе будет :  ";

	

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