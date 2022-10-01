#include "Statistics.h"
/////////////////////////

// �-��� Sum

int Sum(int array[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "����� ��������� �������: " << summa;
	return summa;
}
//---------------------------------------
// �-��� Avg

double Avg(int array[], int size)
{
	return (double)Sum(array, size) / size;
}

//---------------------------------------
// �-��� minValueIn

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
// �-��� maxValueIn

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