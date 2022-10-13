
////!!!!!!!!!!!!!!! ПОКА БЕЗ ДВУМЕРНЫХ!!!!
//поторопился выложить домашку!!!!!!
// Двумерные еще пишу!!!!!!!!!!!!!!!


#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

const int ROWS = 10;
const int COLS = 10;
void repchar (char, int); // оформление


void FillRand (int array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (char array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (float array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (double array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill = 0, int maxRand_Fill = 100);

void Print (int array[], int size);
void Print (char array[], int size);
void Print (float array[], int size);
void Print (double array[], int size);
void Print (int array_2[ROWS][COLS], int size_2);

void ReversePrint(int array[], int size);
void ReversePrint(char array[], int size);
void ReversePrint(float array[], int size);
void ReversePrint(double array[], int size);


double Sum(int array[], int size);
double Sum(char array[], int size);
double Sum(float array[], int size);
double Sum(double array[], int size);



double Avg(int array[], int size);
double Avg(char array[], int size);
double Avg(float array[], int size);
double Avg(double array[], int size);



double minValueIn(int array[], int size);
double minValueIn(char array[], int size);
double minValueIn(float array[], int size);
double minValueIn(double array[], int size);


double maxValueIn(int array[], int size);
double maxValueIn(char array[], int size);
double maxValueIn(float array[], int size);
double maxValueIn(double array[], int size);


void shiftLeft(int array[], int size, int sdvig);
void shiftLeft(char array[], int size, int sdvig);
void shiftLeft(float array[], int size, int sdvig);
void shiftLeft(double array[], int size, int sdvig);


void shiftRight(int array[], int size, int sdvig);
void shiftRight(char array[], int size, int sdvig);
void shiftRight(float array[], int size, int sdvig);
void shiftRight(double array[], int size, int sdvig);


void SortMax(int array[], int size);
void SortMax(char array[], int size);
void SortMax(float array[], int size);
void SortMax(double array[], int size);


void SortMin(int array[], int size);
void SortMin(char array[], int size);
void SortMin(float array[], int size);
void SortMin(double array[], int size);



void UniqueRand(int array[], int size,int minRand_Unique=0,int maxRand_Unique=100);
void UniqueRand(char array[], int size,int minRand_Unique=0,int maxRand_Unique=100);
void UniqueRand(float array[], int size,int minRand_Unique=0,int maxRand_Unique=100);
void UniqueRand(double array[], int size,int minRand_Unique=0,int maxRand_Unique=100);



void Search(int array[], int size, int minRand_Search = 0, int maxRand_Search = 100);
void Search(char array[], int size, int minRand_Search = 0, int maxRand_Search = 100);
void Search(float array[], int size, int minRand_Search = 0, int maxRand_Search = 100);
void Search(double array[], int size, int minRand_Search = 0, int maxRand_Search = 100);


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
	//Print(array, razm);
	//cout << endl;
	//cout << setw(30) << "Сформированный массив для ф-ции Search: ";
	
	//repchar('=', 88);

	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "             Проект Function/Arrays \n\n  ";
	cout << OFFSET << "                Двумерный массив \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";


	cout << "  Введите размер массива (не больше 100):  ";
	int razm_2;
	cin >> razm_2;
	cout << endl;
	while (razm_2 > 100 || razm_2 <= 0)
	{
		cout << " Размер массива может быть от 1 до 100!" << endl;
		cout << " Введите снова: ";
		cin >> razm_2;
	}
	
	int array_2[ROWS][COLS];

	int minRand_Fill_2, maxRand_Fill_2;
	cout << setw(30) << "Введите диапазон массива из " << razm << " элементов для случайных чисел от : ";
	cin >> minRand_Fill_2;
	cout << endl;
	cout << setw(30) << "Введите диапазон массива из " << razm << " элементов для случайных чисел до: ";
	cin >> maxRand_Fill_2;

	FillRand(array_2, ROWS,COLS, minRand_Fill_2, maxRand_Fill_2);



	repchar('=', 88);
	cout << setw(30) << " Cформированный массив: ";
	Print(array_2, razm_2);
	cout << endl;

	
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

void FillRand(int array[], int size,int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand_Fill-minRand_Fill)+minRand_Fill;
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
		for (int j = 0; i < COLS; i++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}

//---------------------------------------
// ф-ции Print

void Print(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void Print(char array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void Print(float array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void Print(double array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void Print(int array_2[ROWS][COLS], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j=0; j<COLS; j++)
		cout << array_2[i][j] << " ";
	}
	cout << endl;

}

//---------------------------------------
// ф-ции ReversePrint

void ReversePrint(int array[], int size)
{
	for (int i = size-1; i >=0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void ReversePrint(char array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void ReversePrint(float array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}

void ReversePrint(double array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------
// ф-ции Sum

double Sum(int array[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
double Sum(char array[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
double Sum(float array[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
double Sum(double array[], int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
//---------------------------------------
// ф-ции Avg

double Avg(int array[], int size)
{
	return (double)Sum(array, size) / size;
}

double Avg(char array[], int size)
{
	return (double)Sum(array, size) / size;
}

double Avg(float array[], int size)
{
	return (double)Sum(array, size) / size;
}

double Avg(double array[], int size)
{
	return (double)Sum(array, size) / size;
}

//---------------------------------------
// ф-ции minValueIn

double minValueIn(int array[], int size)
{
	double min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

double minValueIn(char array[], int size)
{
	double min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

double minValueIn(float array[], int size)
{
	double min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

double minValueIn(double array[], int size)
{
	double min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

//---------------------------------------
// ф-ции maxValueIn

double maxValueIn(int array[], int size)
{
	double max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

double maxValueIn(char array[], int size)
{
	double max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
double maxValueIn(float array[], int size)
{
	double max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
double maxValueIn(double array[], int size)
{
	double max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}


//---------------------------------------
// ф-ции shiftLeft

void shiftLeft(int array[], int size, int sdvig)
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
void shiftLeft(char array[], int size, int sdvig)
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
void shiftLeft(float array[], int size, int sdvig)
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
void shiftLeft(double array[], int size, int sdvig)
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
//---------------------------------------
// ф-ции shiftRight

void shiftRight(int array[], int size, int sdvig)
{
	shiftLeft(array, size, size-sdvig);
}

void shiftRight(char array[], int size, int sdvig)
{
	shiftLeft(array, size, size - sdvig);
}

void shiftRight(float array[], int size, int sdvig)
{
	shiftLeft(array, size, size - sdvig);
}

void shiftRight(double array[], int size, int sdvig)
{
	shiftLeft(array, size, size - sdvig);
}

//---------------------------------------
// ф-ции SortMax

void SortMax(int array[], int size)
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

void SortMax(char array[], int size)
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

void SortMax(float array[], int size)
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

void SortMax(double array[], int size)
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

//---------------------------------------
// ф-ции SortMin

void SortMin(int array[], int size)
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


void SortMin(char array[], int size)
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


void SortMin(float array[], int size)
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


void SortMin(double array[], int size)
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

//---------------------------------------
// ф-ции Uniquerand

void UniqueRand(int array[], int size, int minRand_Unique, int maxRand_Unique)
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

void UniqueRand(char array[], int size, int minRand_Unique, int maxRand_Unique)
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


void UniqueRand(float array[], int size, int minRand_Unique, int maxRand_Unique)
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


void UniqueRand(double array[], int size, int minRand_Unique, int maxRand_Unique)
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

//---------------------------------------
// ф-ции Search

void Search(int array[], int razm, int minRand_Search, int maxRand_Search)


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

void Search(char array[], int razm, int minRand_Search, int maxRand_Search)


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

void Search(float array[], int razm, int minRand_Search, int maxRand_Search)


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

void Search(double array[], int razm, int minRand_Search, int maxRand_Search)


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


