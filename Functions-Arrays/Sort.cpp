// ф-ция SortMax

void SortMax(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
//---------------------------------------
// ф-ция SortMin

void SortMin(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] > array[i])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
//---------------------------------------