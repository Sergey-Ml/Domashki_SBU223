#include"Print_ReversePrint.h"

// ф-ции Print

template<typename T>void Print(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

template<typename T>void Print(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}
// ф-ции ReversePrint
template<typename T>void ReversePrint(T array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
template<typename T>void ReversePrint(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{

	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{

			cout << setw(8) << array_2[i][j] << "  ";

		}
		cout << endl;
	}
	cout << endl;
}


