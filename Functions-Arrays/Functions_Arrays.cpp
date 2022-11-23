

#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

const int ROWS = 100;
const int COLS = 100;
void repchar (char, int); // оформление


void FillRand (int array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (char array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (float array[], int size, int minRand_Fill=0, int maxRand_Fill=100);
void FillRand (double array[], int size, int minRand_Fill=0, int maxRand_Fill=100);

void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(float array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);


void Print (int array[], int size);
void Print (char array[], int size);
void Print (float array[], int size);
void Print (double array[], int size);

void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS);
void Print(char array_2[ROWS][COLS], const int ROWS, const int COLS);
void Print(float array_2[ROWS][COLS], const int ROWS, const int COLS);
void Print(double array_2[ROWS][COLS], const int ROWS, const int COLS);


void ReversePrint(int array[], int size);
void ReversePrint(char array[], int size);
void ReversePrint(float array[], int size);
void ReversePrint(double array[], int size);

void ReversePrint(int array_2[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(char array_2[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(float array_2[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(double array_2[ROWS][COLS], const int ROWS, const int COLS);


double Sum(int array[], int size);
double Sum(char array[], int size);
double Sum(float array[], int size);
double Sum(double array[], int size);

double Sum(int array_2[ROWS][COLS], const int ROWS, const int COLS);
double Sum(char array_2[ROWS][COLS], const int ROWS, const int COLS);
double Sum(float array_2[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double array_2[ROWS][COLS], const int ROWS, const int COLS);


double Avg(int array[], int size);
double Avg(char array[], int size);
double Avg(float array[], int size);
double Avg(double array[], int size);

double Avg(int array_2[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char array_2[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float array_2[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double array_2[ROWS][COLS], const int ROWS, const int COLS);


double minValueIn(int array[], int size);
double minValueIn(char array[], int size);
double minValueIn(float array[], int size);
double minValueIn(double array[], int size);

double minValueIn(int array_2[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(float array_2[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(char array_2[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double array_2[ROWS][COLS], const int ROWS, const int COLS);


double maxValueIn(int array[], int size);
double maxValueIn(char array[], int size);
double maxValueIn(float array[], int size);
double maxValueIn(double array[], int size);

double maxValueIn(int array_2[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(char array_2[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(float array_2[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double array_2[ROWS][COLS], const int ROWS, const int COLS);


void shiftLeft(int array[], int size, int sdvig);
void shiftLeft(char array[], int size, int sdvig);
void shiftLeft(float array[], int size, int sdvig);
void shiftLeft(double array[], int size, int sdvig);

void shiftLeft(int array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2);
void shiftLeft(char array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2);
void shiftLeft(float array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2);
void shiftLeft(double array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2);


void shiftRight(int array[], int size, int sdvig);
void shiftRight(char array[], int size, int sdvig);
void shiftRight(float array[], int size, int sdvig);
void shiftRight(double array[], int size, int sdvig);

void shiftRight(int array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3);
void shiftRight(char array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3);
void shiftRight(float array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3);
void shiftRight(double array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3);


void SortMax(int array[], int size);
void SortMax(char array[], int size);
void SortMax(float array[], int size);
void SortMax(double array[], int size);

void SortMax(int array_2[ROWS][COLS], const int ROWS, const int COLS);
void SortMax(char array_2[ROWS][COLS], const int ROWS, const int COLS);
void SortMax(float array_2[ROWS][COLS], const int ROWS, const int COLS);
void SortMax(double array_2[ROWS][COLS], const int ROWS, const int COLS);


void SortMin(int array[], int size);
void SortMin(char array[], int size);
void SortMin(float array[], int size);
void SortMin(double array[], int size);

void SortMin(int array_2[ROWS][COLS], const int ROWS, const int COLS);
void SortMin(char array_2[ROWS][COLS], const int ROWS, const int COLS);
void SortMin(float array_2[ROWS][COLS], const int ROWS, const int COLS);
void SortMin(double array_2[ROWS][COLS], const int ROWS, const int COLS);


void UniqueRand(int array[], int size,int minRand_Unique=0,int maxRand_Unique=100);
void UniqueRand(char array[], int size,int minRand_Unique=0,int maxRand_Unique=100);
void UniqueRand(float array[], int size,int minRand_Unique=0,int maxRand_Unique=100);
void UniqueRand(double array[], int size,int minRand_Unique=0,int maxRand_Unique=100);

void UniqueRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique = 0, int maxRand_Unique = 100);
void UniqueRand(char array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique = 0, int maxRand_Unique = 100);
void UniqueRand(float array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique = 0, int maxRand_Unique = 100);
void UniqueRand(double array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique = 0, int maxRand_Unique = 100);


void Search(int array[], int size, int minRand_Search = 0, int maxRand_Search = 100);
void Search(char array[], int size, int minRand_Search = 0, int maxRand_Search = 100);
void Search(float array[], int size, int minRand_Search = 0, int maxRand_Search = 100);
void Search(double array[], int size, int minRand_Search = 0, int maxRand_Search = 100);

void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);

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

void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}

void Print(char array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}

void Print(float array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}

void Print(double array_2[ROWS][COLS], const int ROWS, const int COLS)
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

void ReversePrint(int array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
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


void ReversePrint(int array_2[ROWS][COLS], const int ROWS, const int COLS)
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


void ReversePrint(char array_2[ROWS][COLS], const int ROWS, const int COLS)
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


void ReversePrint(float array_2[ROWS][COLS], const int ROWS, const int COLS)
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


void ReversePrint(double array_2[ROWS][COLS], const int ROWS, const int COLS)
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

double Sum(int array_2[ROWS][COLS], const int ROWS, const int COLS)
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


double Sum(char array_2[ROWS][COLS], const int ROWS, const int COLS)
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


double Sum(float array_2[ROWS][COLS], const int ROWS, const int COLS)
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


double Sum(double array_2[ROWS][COLS], const int ROWS, const int COLS)
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

double Avg(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS*COLS);
}

double Avg(char array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS * COLS);
}

double Avg(float array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS * COLS);
}

double Avg(double array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS * COLS);
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

double minValueIn(int array_2[ROWS][COLS], const int ROWS, const int COLS)
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

double minValueIn(char array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array_2[i][j] < min)
				min = array_2[i][j];
		}
	}
	return min;
}

double minValueIn(float array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array_2[i][j] < min)
				min = array_2[i][j];
		}
	}
	return min;
}

double minValueIn(double array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array_2[i][j] < min)
				min = array_2[i][j];
		}
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

double maxValueIn(int array_2[ROWS][COLS], const int ROWS, const int COLS)
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


double maxValueIn(char array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (array_2[i][j] > max)
				max = array_2[i][j];
	}
	return max;
}


double maxValueIn(float array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (array_2[i][j] > max)
				max = array_2[i][j];
	}
	return max;
}


double maxValueIn(double array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = array_2[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (array_2[i][j] > max)
				max = array_2[i][j];
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


void shiftLeft(int array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
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


void shiftLeft(char array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
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


void shiftLeft(float array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
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


void shiftLeft(double array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
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


void shiftRight(int array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3)
{
	shiftLeft(array_2, ROWS, COLS, ROWS*COLS-sdvig_3);
}


void shiftRight(char array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3)
{
	shiftLeft(array_2, ROWS, COLS, ROWS * COLS - sdvig_3);
}


void shiftRight(float array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3)
{
	shiftLeft(array_2, ROWS, COLS, ROWS * COLS - sdvig_3);
}


void shiftRight(double array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_3)
{
	shiftLeft(array_2, ROWS, COLS, ROWS * COLS - sdvig_3);
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



void SortMax(int array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void SortMax(char array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void SortMax(float array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void SortMax(double array_2[ROWS][COLS], const int ROWS, const int COLS)
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


void SortMin(int array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void SortMin(char array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void SortMin(float array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void SortMin(double array_2[ROWS][COLS], const int ROWS, const int COLS)
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



void UniqueRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique, int maxRand_Unique)
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



void UniqueRand(char array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique, int maxRand_Unique)
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


void UniqueRand(float array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique, int maxRand_Unique)
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


void UniqueRand(double array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Unique, int maxRand_Unique)
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



void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
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



void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
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



void Search(float arr[ROWS][COLS], const int ROWS, const int COLS)
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



void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
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


