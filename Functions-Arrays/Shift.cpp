#include"Shift.h"
// ф-ции shiftLeft

template<typename T>void shiftLeft(T array[], int size, int sdvig)
{
	for (int i = 0; i < sdvig; i++)
	{
		double temp = array[0];
		for (int i = 0; i < size; i++)
		{
			array[i] = array[i + 1];
		}
		array[size - 1] = temp;
	}
}

template<typename T>void shiftLeft(T array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
{
	for (int i = 0; i < sdvig_2; i++)
	{
		double temp = array_2[0][0];
		for (int j = 0; j < ROWS; j++)
		{

			for (int g = 0; g < COLS - 1; g++)
			{


				array_2[j][g] = array_2[j][g + 1];

			}
			array_2[j][COLS - 1] = array_2[j + 1][0];

		}
		array_2[ROWS - 1][COLS - 1] = temp;
	}
}

//---------------------------------------
// ф-ции shiftRight

template<typename T>void shiftRight(T array[], int size, int sdvig)
{
	shiftLeft(array, size, size - sdvig);
}

template<typename T>void shiftRight(T array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3)
{
	shiftLeft(array_2, ROWS, COLS, ROWS * COLS - sdvig_3);
}

