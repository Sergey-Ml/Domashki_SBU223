#include"UniqueRand.h"
// �-��� Uniquerand

template<typename T>void UniqueRand(T array[], int size, int minRand_Unique, int maxRand_Unique)
{
	for (int i = 0; i < size; i++)
	{


		bool unique; //����� ���������?
		do
		{
			array[i] = rand() % (maxRand_Unique - minRand_Unique) + minRand_Unique;
			unique = true; // ������������, ��� ����� ���������, �� ��� ����� ���������

			for (int j = 0; j < i; j++)
			{
				if (array[i] == array[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}


template<typename T>void UniqueRand(T array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique, int maxRand_Unique)
{

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique; //����� ���������?
			do
			{
				array_2[i][j] = rand() % (maxRand_Unique - minRand_Unique) + minRand_Unique;
				unique = true; // ������������, ��� ����� ���������, �� ��� ����� ���������
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++) // �����4� �� ��������� ���������� ���������, � ������ � ������� �-� ���������� �������� �� ���������� ��-�� �������������
					{
						////array_2[k][l] -  ������������ �������
						if (array_2[k][l] == array_2[i][j])
						{
							unique = false;
							break;
						}
					}
				}

			} while (!unique);
		}

	}
}

