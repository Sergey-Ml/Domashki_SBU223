#include<iostream>
#include <conio.h> 
using namespace std;
int main()
{
	char key;
	do
	{

		key = _getch();
		cout << (int)key;
	}

	while (key != 27);
}
