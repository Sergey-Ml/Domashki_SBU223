#include "Statistics.h"
/////////////////////////

// ф-ция Sum

int Sum(int array[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
//---------------------------------------
// ф-ция Avg

double Avg(int array[], int size)
{
	return (double)Sum(array, size) / size;
}

//---------------------------------------
// ф-ция minValueIn

int minValueIn(int array[], int size)
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
//---------------------------------------
// ф-ция maxValueIn

int maxValueIn(int array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
//---------------------------------------