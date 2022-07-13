#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "Russian");
	int a = 0, b, i, flag, temp;
	cout << " Введите число : ";
	cin >> b;
	cout << " Простые числа до " << b << ": ";
	while (a < b)
	{
		flag = 0;
		for (i = 2; i <= a / 2; ++i)
		{
			if (a % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << a << " ";
		++a;
	}
	
	cout << endl;
}