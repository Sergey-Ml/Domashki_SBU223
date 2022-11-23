#include"Sort.h"
// �-��� SortMax

template<typename T>void SortMax(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				T temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}


template<typename T>void SortMax(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) //��������� ���-�� ��������
				{
					//array_2[i][j] -  ��������� �������
					//array_2[k][l] -  ������������ �������
					if (array_2[k][l] < array_2[i][j])
					{
						swap(array_2[i][j], array_2[k][l]);
					}
				}
			}
		}

	}
}

//---------------------------------------
// �-��� SortMin

template<typename T>void SortMin(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] > array[i])
			{
				T temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template<typename T>void SortMin(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) //��������� ���-�� ��������
				{
					//array_2[i][j] -  ��������� �������
					//array_2[k][l] -  ������������ �������
					if (array_2[k][l] > array_2[i][j])
					{
						swap(array_2[i][j], array_2[k][l]);
					}
				}
			}
		}

	}
}

