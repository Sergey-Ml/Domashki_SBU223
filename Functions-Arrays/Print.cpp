#include"Print.h"
//---------------------------------------
// ф-ция Print

void Print(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------
// ф-ция ReversePrint

void ReversePrint(int array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------