#include"Statistics.h"
// ф-ции Sum

template<typename T>T Sum(T array[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}

template<typename T>T Sum(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double summa = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summa += array_2[i][j];
		}
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}


//---------------------------------------
// ф-ции Avg

template<typename T>double Avg(T array[], int size)
{
	return (double)Sum(array, size) / size;
}


template<typename T>double Avg(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS * COLS);
}

//---------------------------------------
// ф-ции minValueIn


template<typename T>T minValueIn(T array[], int size)
{
	double min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

template<typename T>T minValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array_2[i][j] < min)
				min = array_2[i][j];
		}
	}
	return min;
}


template<typename T>T maxValueIn(T array[], int size)
{
	double max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
template<typename T>T maxValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (array_2[i][j] > max)
				max = array_2[i][j];
	}
	return max;
}
