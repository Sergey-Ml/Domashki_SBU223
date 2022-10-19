#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

const int ROWS = 100;
const int COLS = 100;
void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand=100);
void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS);
void ReversePrint(int array_2[ROWS][COLS], const int ROWS, const int COLS);
double Sum(int array_2[ROWS][COLS], const int ROWS, const int COLS);
double Avg(int array_2[ROWS][COLS], const int ROWS, const int COLS);
//void shiftLeft(int array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2);
void SortMax(int array_2[ROWS][COLS], const int ROWS, const int COLS);

int main()
{
	setlocale(LC_ALL, "Russian");

	
	cout << "Введите количество строк: ";
	int RAZM_ROWS;
	cin >> RAZM_ROWS;

	while (RAZM_ROWS > 100 || RAZM_ROWS <= 0)
	{
		cout << " Количество строк может быть от 1 до 100!" << endl;
		cout << " Введите снова: ";
		cin >> RAZM_ROWS;
	}
	cout << endl;

	cout << "Введите количество столбцов: ";
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

	int minRand_Fill, maxRand_Fill;
	cout << setw(30) << "Введите диапазон массива для случайных чисел ОТ : ";
	cin >> minRand_Fill;
	cout << endl;
	cout << setw(30) << "Введите диапазон массива для случайных чисел ДО: ";
	cin >> maxRand_Fill;
	
	FillRand(array_2, RAZM_ROWS, RAZM_COLS,minRand_Fill,maxRand_Fill);
	
	cout << setw(30) << " Cформированный массив: " << endl;
	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;
	cout << setw(30) << " Обратный массив: " << endl;
	ReversePrint(array_2, RAZM_ROWS, RAZM_COLS);
		cout << endl;
	cout << setw(30) << " Сумма элементов массива: " << Sum(array_2, RAZM_ROWS, RAZM_COLS) << endl;
	cout << endl;
	cout << setw(30) << " Среднее-арифметическое: " << Avg(array_2, RAZM_ROWS, RAZM_COLS) << endl;
	cout << endl;
	//cout << setw(30) << " Минимальное значение: " << minValueIn(array, razm) << endl;
	cout << endl;
	//cout << setw(30) << " Максимальное значение: " << maxValueIn(array, razm) << endl;
	/*cout << endl;
	cout << setw(30) << "Введите число сдвига влево: ";
	int sdvig_2;
	cin >> sdvig_2;
	shiftLeft(array_2, RAZM_ROWS, RAZM_COLS, sdvig_2);
	cout << "  Сдвинутый влево на " << sdvig_2 << " элем.: " << endl;
	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;*/


	SortMax(array_2, RAZM_ROWS, RAZM_COLS);
	cout << setw(30) << "Сортировка по возрастанию: " << endl;
	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;

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

void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout<< setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}

void ReversePrint(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{

		for (int i = ROWS-1; i>=0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				
					cout << setw(8) << array_2[i][j] << "  ";
				
			}
			cout << endl;
		}
		cout << endl;
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
double Avg(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(array_2, ROWS, COLS) / (ROWS * COLS);
}


void shiftLeft(int array_2[ROWS][COLS], const int ROWS, const int COLS, int sdvig_2)
{
	for (int i = 0; i < sdvig_2; i++)
	{
		double temp = array_2[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				array_2[i][j] = array_2[i + 1][j];
			}
			array_2[i][COLS] = temp;
		}
	}
}

void SortMax(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)

	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i + 1; k < ROWS; k++)
			{
				if (array_2[k][j] < array_2[i][j])
				{
					double temp = array_2[i][j];
					array_2[i][j] = array_2[k][j];
					array_2[k][j] = temp;
				}
			}
		}
	}
}
