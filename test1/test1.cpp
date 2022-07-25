#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "Russian");
	
	for (int i = 2; i <= 4; i++)
	{
		do 
		{
			for (int j = 1; j <= 9; j++)
			{
				cout << i << " * " << j << " = " << i * j << "\t\t";;

			}
			cout << endl;
		} while (i <= 4);
	}
}
