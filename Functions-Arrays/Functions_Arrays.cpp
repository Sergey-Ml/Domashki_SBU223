#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

void repchar (char, int); // оформление
void FillRand (int array[], int size, int minRand=0, int maxRand=100);
void Print (int array[], int size);
void ReversePrint(int array[], int size);
int Sum(int array[], int size);
double Avg(int array[], int size);
int minValueIn(int array[], int size);
int maxValueIn(int array[], int size);
void shiftLeft(int array[], int size, int sdvig);
void shiftRight(int array[], int size, int sdvig);
void SortMax(int array[], int size);
void SortMin(int array[], int size);
void UniqueRand(int array[], int size);


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "             Проект Function/Arrays \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";

	cout << " Введите размер массива (не больше 100):  ";
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
	
	FillRand(array, razm, 100, 110);

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
	cout << setw(30) << " Сортировка по возрастанию:  ";
	Print(array, razm);
	cout << endl;

	SortMin(array, razm);
	cout << setw(30) << " Сортировка по убыванию:  ";
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

	UniqueRand(array, razm);
	cout << setw(30) << " Уникальные числа:  ";
	Print(array, razm);
	cout << endl;

	repchar('=', 88);
	
	
	
	

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

// ф-ция FillRand

void FillRand(int array[], int size,int minRand, int maxRand)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (maxRand-minRand)+maxRand;
	}

}
//---------------------------------------
// ф-ция Print

void Print(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------
// ф-ция ReversePrint

void ReversePrint(int array[], int size)
{
	for (int i = size-1; i >=0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

}
//---------------------------------------
// ф-ция Sum

int Sum(int array[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
//---------------------------------------
// ф-ция Avg

double Avg(int array[], int size)
{
	return (double)Sum(array, size) / size;
}

//---------------------------------------
// ф-ция minValueIn

int minValueIn(int array[], int size)
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
//---------------------------------------
// ф-ция maxValueIn

int maxValueIn(int array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
//---------------------------------------
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
	shiftLeft(array, size, size-sdvig);
}
//---------------------------------------
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
// ф-ция Uniquerand

void UniqueRand(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{


		bool unique; //число уникально?
		do
		{
			array[i] = rand() % size;
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
//при вводе парам по умолчанию - ошибка !!!