

#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

const int ROWS = 100;
const int COLS = 100;
void repchar (char, int); // оформление

template<typename T>
void FillRand (T array[], int size, int minRand_Fill=0, int maxRand_Fill=100);

template<typename T>
void FillRand(T array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>
void Print (T array[], int size);

template<typename T>
void Print(T array_2[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
void ReversePrint(T array[], int size);

template<typename T>
void ReversePrint(T array_2[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T Sum(T array[], int size);


template<typename T>
T Sum(T array_2[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
double Avg(T array[], int size);

template<typename T>
double Avg(T array_2[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T minValueIn(T array[], int size);

template<typename T>
T minValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T maxValueIn(T array[], int size);


template<typename T>
T maxValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
void shiftLeft(T array[], int size, int sdvig);

template<typename T>
void shiftLeft(T array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2);


template<typename T>
void shiftRight(T array[], int size, int sdvig);

template<typename T>
void shiftRight(T array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3);


template<typename T>
void SortMax(T array[], int size);


template<typename T>
void SortMax(T array_2[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void SortMin(T array[], int size);

template<typename T>
void SortMin(T array_2[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void UniqueRand(T array[], int size,int minRand_Unique=0,int maxRand_Unique=100);

template<typename T>
void UniqueRand(T array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique = 0, int maxRand_Unique = 100);


template<typename T>
void Search(T array[], int size, int minRand_Search = 0, int maxRand_Search = 100);

template<typename T>
void Search(T arr[ROWS][COLS], const int ROWS, const int COLS);

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "             Проект Function/Arrays \n\n  ";
	cout << OFFSET << "           Работа со случайными числами \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";

	cout << "  Введите размер массива (не больше 100):  ";
	int razm;
	cin >> razm;
	cout << endl;
	while (razm > 100 || razm <= 0)
	{
		cout << " Размер массива может быть от 1 до 100!" << endl;
		cout << " Введите снова: ";
		cin >> razm;
	}
	const int size = 100;
	int array[size];
	
	int minRand_Fill, maxRand_Fill;
	cout << setw(30) << "Введите диапазон массива из " << razm << " элементов для случайных чисел от : ";
	cin >> minRand_Fill;
	cout << endl;
	cout << setw(30) << "Введите диапазон массива из " << razm << " элементов для случайных чисел до: ";
	cin >> maxRand_Fill;
	
	FillRand(array, razm, minRand_Fill, maxRand_Fill);


	repchar('=', 88);
	cout << setw(30)<< " Cформированный массив: ";

	Print(array, razm);
	cout << endl;
	cout << setw(30) << " Обратный массив: ";

	ReversePrint(array, razm);

	cout << endl;
	cout << setw(30) << " Сумма элементов массива: " << Sum(array, razm) << endl;
	cout << endl;
	cout << setw(30) << " Среднее-арифметическое: " << Avg(array, razm) << endl;
	cout << endl;
	cout << setw(30) << " Минимальное значение: " << minValueIn(array, razm) << endl;
	cout << endl;
	cout << setw(30) << " Максимальное значение: " << maxValueIn(array, razm) << endl;
	cout << endl;

	SortMax(array, razm);
	cout << setw(30) << "Сортировка по возрастанию: ";

	Print(array, razm);
	cout << endl;

	SortMin(array, razm);
	cout << setw(30) << "Сортировка по убыванию: ";

	Print(array, razm);
	cout << endl;

	cout << setw(30) << "Введите число сдвига влево: ";
	int sdvig;
	cin >> sdvig;

	shiftLeft(array, razm, sdvig);
	cout <<"  Сдвинутый влево на " << sdvig << " элем.: ";

	Print(array, razm);
	cout << endl;

	cout << setw(30) << "Введите число сдвига вправо: ";
	cin >> sdvig;

	shiftRight(array, razm, sdvig);
	cout << " Сдвинутый вправо на " << sdvig << " элем.: ";

	Print(array, razm);
	cout << endl;

	//repchar('=', 88);

	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "               Функция Uniquerand \n\n  ";
	cout << OFFSET << "           Работа с уникальными числами \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";


	int minRand_Unique, maxRand_Unique;
	cout << setw(30) << "Введите диапазон для формирования массива из " << razm << " элементов уникальными числами ОТ: ";
	cin >> minRand_Unique;
	cout << setw(30) << "Введите диапазон для формирования массива из " << razm << " элементов уникальными числами ДО: ";
	cin >> maxRand_Unique;
	cout << endl;

	UniqueRand(array, razm, minRand_Unique, maxRand_Unique);
	cout << setw(30) << "Сформированный массив из уникальных чисел: ";

	Print(array, razm);
	cout << endl;
	

	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "               Функция Search \n\n  ";
	cout << OFFSET << "           Работа с повторяющимися числами \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";

	int minRand_Search, maxRand_Search;
	cout << setw(30) << "Введите диапазон для формирования массива " << razm << " элементов повторяющимися числами ОТ: ";
	cin >> minRand_Search;
	cout << setw(30) << "Введите диапазон для формирования массива " << razm << " элементов повторяющимися числами ДО: ";
	cin >> maxRand_Search;
	cout << endl;

	while (maxRand_Search-minRand_Search >= razm)
	{
		cout << "В данном диапазоне не хватит цифр для повторения чисел" << endl;
		cout << " Уменьшите диапазон ";
		cout << setw(30) << "Введите диапазон для формирования массива " << razm << " элементов повторяющимися числами ОТ: ";
		cin >> minRand_Search;
		cout << endl;
		cout << setw(30) << "Введите диапазон для формирования массива " << razm << " элементов повторяющимися числами ДО: ";
		cin >> maxRand_Search;
	}

	cout << endl;
	cout << setw(30) << "Сформированный массив для ф-ции Search: ";
	Search(array,razm, minRand_Search, maxRand_Search);
	

	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "             Проект Function/Arrays \n\n  ";
	cout << OFFSET << "                Двумерный массив \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";


	cout << "Введите количество строк (не более 100): ";
	int RAZM_ROWS;
	cin >> RAZM_ROWS;

	while (RAZM_ROWS > 100 || RAZM_ROWS <= 0)
	{
		cout << " Количество строк может быть от 1 до 100!" << endl;
		cout << " Введите снова: ";
		cin >> RAZM_ROWS;
	}
	cout << endl;

	cout << "Введите количество столбцов (не более 100): ";
	int RAZM_COLS;
	cin >> RAZM_COLS;
	cout << endl;

	while (RAZM_COLS > 100 || RAZM_COLS <= 0)
	{
		cout << " Количество столбцов может быть от 1 до 100!" << endl;
		cout << " Введите снова: ";
		cin >> RAZM_COLS;
	}

	cout << endl;
	int array_2[ROWS][COLS];

	int minRand_Fill_2, maxRand_Fill_2;
	cout << setw(30) << "Введите диапазон массива для случайных чисел ОТ : ";
	cin >> minRand_Fill_2;
	cout << endl;
	cout << setw(30) << "Введите диапазон массива для случайных чисел ДО: ";
	cin >> maxRand_Fill_2;
	cout << endl;

	repchar('-', 88);

	FillRand(array_2, RAZM_ROWS, RAZM_COLS, minRand_Fill_2, maxRand_Fill_2);
	cout << setw(30) << " Cформированный массив: " << endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	repchar('-', 88);

	cout << setw(30) << " Обратный массив: " << endl;
	ReversePrint(array_2, RAZM_ROWS, RAZM_COLS);
	
	repchar('-', 88);

	cout << setw(30) << " Сумма элементов массива: " << Sum(array_2, RAZM_ROWS, RAZM_COLS) << endl;
	cout << endl;
	cout << setw(30) << " Среднее-арифметическое: " << Avg(array_2, RAZM_ROWS, RAZM_COLS) << endl;
	cout << endl;
	cout << setw(30) << " Минимальное значение: " << minValueIn(array_2, RAZM_ROWS, RAZM_COLS) << endl;
	cout << endl;
	cout << setw(30) << " Максимальное значение: " << maxValueIn(array_2, RAZM_ROWS, RAZM_COLS) << endl;
	cout << endl;

	repchar('-', 88);
	
	SortMax(array_2, RAZM_ROWS, RAZM_COLS);
	cout << setw(30) << "Сортировка по возрастанию: "<< endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	SortMin(array_2, RAZM_ROWS, RAZM_COLS);
	cout << setw(30) << "Сортировка по убыванию: " << endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	cout << setw(30) << "Введите число сдвига влево: ";
	int sdvig_2;
	cin >> sdvig_2;

	shiftLeft(array_2, RAZM_ROWS, RAZM_COLS,sdvig_2);
	cout << "  Сдвинутый влево на " << sdvig_2 << " элем.: " << endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	cout << setw(30) << "Введите число сдвига вправо: ";
	int sdvig_3;
	cin >> sdvig_3;

	shiftRight(array_2, RAZM_ROWS, RAZM_COLS, sdvig_3);
	cout << " Сдвинутый вправо на " << sdvig_3 << " элем.: " << endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "      Функция Uniquerand для двумерных массивов \n\n  ";
	cout << OFFSET << "           Работа с уникальными числами \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";


	int minRand_Unique_2, maxRand_Unique_2;
	cout << setw(30) << "Введите диапазон для формирования массива из " << RAZM_ROWS*RAZM_COLS << " элементов уникальными числами ОТ: ";
	cin >> minRand_Unique_2;
	cout << setw(30) << "Введите диапазон для формирования массива из " << RAZM_ROWS*RAZM_COLS << " элементов уникальными числами ДО: ";
	cin >> maxRand_Unique_2;
	cout << endl;

	UniqueRand(array_2, RAZM_ROWS, RAZM_COLS, minRand_Unique_2, maxRand_Unique_2);
	cout << setw(30) << "Сформированный массив из уникальных чисел: " << endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "               Функция Search \n\n  ";
	cout << OFFSET << "           Работа с повторяющимися числами \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";

	int minRand_Fill_3, maxRand_Fill_3;
	cout << setw(30) << "Введите диапазон массива для формирования массива из " << RAZM_ROWS * RAZM_COLS << " элементов ОТ: ";
	cin >> minRand_Fill_3;
	cout << endl;
	cout << setw(30) << "Введите диапазон массива для формирования массива из " << RAZM_ROWS * RAZM_COLS << " элементов ДО: ";
	cin >> maxRand_Fill_3;
	cout << endl;

	FillRand(array_2, RAZM_ROWS, RAZM_COLS, minRand_Fill_3, maxRand_Fill_3);
	cout << setw(30) << " Cформированный массив: " << endl;

	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

	Search(array_2, RAZM_ROWS, RAZM_COLS);

	cout << endl;
	cout << endl;
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "              Милькин Сергей\n\n  ";
	cout << OFFSET << "                   СБУ 223\n\n  ";
	cout << OFFSET << "========================================================\n\n\n";

}

// --------------------------------------
// ф-ция repchar
void repchar(char simvol, int n)
{
	for (int i = 0; i < n; i++)
		cout << simvol;
	cout << endl;
}
// --------------------------------------

// ф-ции FillRand
template<typename T>
void FillRand(T array[], int size,int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand_Fill-minRand_Fill)+minRand_Fill;
	}

}

template<typename T>
void FillRand(T array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}
//---------------------------------------
// ф-ции Print

template<typename T>
void Print(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

template<typename T>
void Print(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}


//---------------------------------------
// ф-ции ReversePrint
template<typename T>
void ReversePrint(T array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
template<typename T>
void ReversePrint(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{

	for (int i = ROWS - 1; i >= 0; i--)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{

			cout << setw(8) << array_2[i][j] << "  ";

		}
		cout << endl;
	}
	cout << endl;
}

//---------------------------------------
// ф-ции Sum

template<typename T>
T Sum(T array[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}

template<typename T>

T Sum(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double summa = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summa += array_2[i][j];
		}
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}


//---------------------------------------
// ф-ции Avg

template<typename T>
double Avg(T array[], int size)
{
	return (double)Sum(array, size) / size;
}


template<typename T>
double Avg(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS*COLS);
}

//---------------------------------------
// ф-ции minValueIn


template<typename T>
T minValueIn(T array[], int size)
{
	double min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

template<typename T>
T minValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j <COLS; j++)
		{
			if (array_2[i][j] < min)
				min = array_2[i][j];
		}
	}
	return min;
}


template<typename T>
T maxValueIn(T array[], int size)
{
	double max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
template<typename T>

T maxValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for(int j=0; j<COLS; j++)
		if (array_2[i][j] > max)
			max = array_2[i][j];
	}
	return max;
}

//---------------------------------------
// ф-ции shiftLeft

template<typename T>
void shiftLeft(T array[], int size, int sdvig)
{
	for (int i = 0; i < sdvig; i++)
	{
		double temp = array[0];
		for (int i = 0; i < size; i++)
		{
			array[i] = array[i + 1];
		}
		array[size - 1] = temp;
	}
}

template<typename T>
void shiftLeft(T array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
{
	for (int i = 0; i < sdvig_2; i++)
	{
		double temp = array_2[0][0];
		for (int j = 0; j < ROWS; j++)
		{

			for (int g = 0; g < COLS - 1; g++)
			{

				
				array_2[j][g] = array_2[j][g + 1];

			}
			array_2[j][COLS - 1] = array_2[j + 1][0];
			
		}
		array_2[ROWS - 1][COLS - 1] = temp;
	}
}

//---------------------------------------
// ф-ции shiftRight

template<typename T>
void shiftRight(T array[], int size, int sdvig)
{
	shiftLeft(array, size, size-sdvig);
}

template<typename T>
void shiftRight(T array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3)
{
	shiftLeft(array_2, ROWS, COLS, ROWS*COLS-sdvig_3);
}


//---------------------------------------
// ф-ции SortMax

template<typename T>
void SortMax(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				double temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}


template<typename T>
void SortMax(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) //уменьшаем кол-во итераций
				{
					//array_2[i][j] -  выбранный элемент
					//array_2[k][l] -  перебираемый элемент
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
// ф-ции SortMin

template<typename T>
void SortMin(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] > array[i])
			{
				double temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

template<typename T>
void SortMin(T array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) //уменьшаем кол-во итераций
				{
					//array_2[i][j] -  выбранный элемент
					//array_2[k][l] -  перебираемый элемент
					if (array_2[k][l] > array_2[i][j])
					{
						swap(array_2[i][j], array_2[k][l]);
					}
				}
			}
		}

	}
}


//---------------------------------------
// ф-ции Uniquerand

template<typename T>
void UniqueRand(T array[], int size, int minRand_Unique, int maxRand_Unique)
{
	for (int i = 0; i < size; i++)
	{


		bool unique; //число уникально?
		do
		{
			array[i] = rand() % (maxRand_Unique - minRand_Unique) + minRand_Unique;
			unique = true; // предполагаем, что число уникально, но это нужно проверить

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


template<typename T>
void UniqueRand(T array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique, int maxRand_Unique)
{

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique; //число уникально?
			do
			{
				array_2[i][j] = rand() % (maxRand_Unique - minRand_Unique) + minRand_Unique;
				unique = true; // предполагаем, что число уникально, но это нужно проверить
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++) // строк4и до выбранной перебираем полностью, а строку с выбранн э-м перебираем частично до выбранного эл-та исключительно
					{
						////array_2[k][l] -  перебираемый элемент
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


//---------------------------------------
// ф-ции Search

template<typename T>
void Search(T array[], int razm, int minRand_Search, int maxRand_Search)


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

template<typename T>
void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
				cout << arr[i][k] << " повторяется " << povtor-1 << "раз(а)" << endl;
			arr[i][k] = 0;
		}


	}

}


