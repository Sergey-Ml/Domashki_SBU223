#include"FillRand.h"


// ф-ции FillRand


void FillRand(int array[], int size, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
	}

}

void FillRand(char array[], int size, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
	}

}
void FillRand(float array[], int size, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
	}

}
void FillRand(double array[], int size, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
	}

}

void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}

void FillRand(char array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}

void FillRand(float array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}

void FillRand(double array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}
