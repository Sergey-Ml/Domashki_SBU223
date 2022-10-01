#include"FillRand.h"

// ф-ция FillRand

void FillRand(int array[], int size, int minRand, int maxRand)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand - minRand) + maxRand;
	}

}