#include"Print.h"
//---------------------------------------
// �-��� Print

void Print(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------
// �-��� ReversePrint

void ReversePrint(int array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------