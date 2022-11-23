#include"Search.h"
// ф-ции Search

template<typename T>void Search(T array[], int razm, int minRand_Search, int maxRand_Search)
{

	bool unique;
	unique = true;

	int povtor = 0;


	for (int i = 0; i < razm; i++)
	{
		array[i] = rand() % (minRand_Search - maxRand_Search) + maxRand_Search;

		cout << array[i] << "  ";


		for (int j = 0; j < i; j++)
		{


			if (array[i] == array[j])
			{
				unique = false;
				++povtor;
				break;
			}

		}


	}
	cout << endl;
	cout << "Количество повторений: " << povtor << endl;
	cout << endl;
	cout << "Повторяющиеся элементы: ";

	for (int i = 0; i < razm; i++)
	{
		for (int j = 0; j < i; j++)
		{

			if (array[i] == array[j])
			{
				unique = false;
				cout << array[j] << "  ";
				break;
			}

		}

	}
	cout << endl;


}

template<typename T>void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	cout << endl;
	int povtor;
	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < COLS; k++)
		{
			povtor = 1;
			for (int j = 0; j < ROWS; j++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[i][k] == arr[j][l] && arr[i][k] != 0)
					{
						povtor++;
						if (j != i || k != l)
						{
							arr[j][l] = 0;
						}
					}
				}
			}
			if (povtor != 1)
				cout << arr[i][k] << " повторяется " << povtor - 1 << "раз(а)" << endl;
			arr[i][k] = 0;
		}


	}

}

