
// ф-ция shiftLeft

void shiftLeft(int array[], int size, int sdvig)
{
	for (int i = 0; i < sdvig; i++)
	{
		int temp = array[0];
		for (int i = 0; i < size; i++)
		{
			array[i] = array[i + 1];
		}
		array[size - 1] = temp;
	}
}
//---------------------------------------
// ф-ция shiftRight

void shiftRight(int array[], int size, int sdvig)
{
	shiftLeft(array, size, size - sdvig);
}
//---------------------------------------