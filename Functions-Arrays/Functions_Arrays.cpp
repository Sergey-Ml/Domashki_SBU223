#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

void repchar(char, int); // оформление

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "             Проект Function/Arrays \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";

	repchar('-', 43);
	cout << " Массив " << endl;
	repchar('=', 23);
	cout << " тоже хз " << endl;
	repchar('-', 43);

}

// --------------------------------------
// ф-ция repchar
void repchar(char simvol, int n)
{
	for (int i = 0; i < n; i++)
		cout << simvol;
	cout << endl;
}