// �-��� Uniquerand
#include"Uniq.h"
#include "stdafx.h"

void UniqueRand(int array[], int size, int minRand, int maxRand)
{
	for (int i = 0; i < size; i++)
	{


		bool unique; //����� ���������?
		do
		{
			array[i] = rand() % size;
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
