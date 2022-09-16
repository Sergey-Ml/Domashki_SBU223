#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"
float ReversePrint(float arr[], int n);
float Sum(float arr[], int n);
float Avg(float arr[], int n);
float minValueInt(float arr[], int n);
float maxValueInt(float arr[], int n);
float Sort(float arr[], int n);
float ShiftLeft(float arr[], int n, int sdvig_l);
float ShiftRight(float arr[], int n, int sdvig_p);



int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "             Проект Function/Arrays \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";
	cout << "Введите размер массива (не больше 100):  ";
	int razm;
	cin >> razm;
	cout << endl;
	while (razm > 100 || razm <= 0)
	{
		cout << "Размер массива может быть от 1 до 100!" << endl;
		cout << "Введите снова: ";
		cin >> razm;
	}
	const int size = 100;
	float array[size] = { 0 };

	//массивы для задач, меняющих изначальный
	float array_rev[size] = { 0 };
	float array_sort[size] = { 0 };
	float array_left[size] = { 0 };
	float array_right[size] = { 0 };

	for (int i = 0; i < razm; i++)
	{
		cout << "Введите " << i + 1 << "-й элемент массива : ";
		cin >> array[i];
	}
	cout << setw(30) << "Введите число сдвига влево: ";
	int sdvig_p;
	cin >> sdvig_p;

	cout << setw(30) << "Введите число сдвига вправо: ";
	int sdvig_l;
	cin >> sdvig_l;

	cout << "--------------------------------------------\n\n";


	cout << setw(30) << "Введенный массив: ";

	// Копии массива для каждой изменяем ф-ции
	memcpy(array_rev, array, sizeof(array_rev));
	memcpy(array_sort, array, sizeof(array_sort));
	memcpy(array_left, array, sizeof(array_left));
	memcpy(array_right, array, sizeof(array_right));

	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;


	float reverseprint = ReversePrint(array, razm);
	//cout << "\n\n";
	float sum = Sum(array, razm);
	//cout << "\n\n";
	float avg = Avg(array, razm);
	//cout << "\n";
	float minvalueint = minValueInt(array, razm);
	//cout << "\n";
	float maxvalueint = maxValueInt(array, razm);
	//cout << "\n";
	float sort = Sort(array_sort, razm);
	//cout << "\n";
	float shiftleft = ShiftLeft(array_left, razm, sdvig_l);
	//cout << "\n";
	float shiftright = ShiftRight(array_right, razm, sdvig_p);
	cout << "\n";

	cout << setw(30) << "Сумма элементов массива: " << sum << endl;
	cout << setw(30) << "Среднее арифметическое: " << avg << endl;
	cout << setw(30) << "Минимальное значение: " << minvalueint << endl;
	cout << setw(30) << "Максимальное значение: " << maxvalueint << endl;

	cout << "\n\n\n\n\n";
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "     Домашнее задание N8 (Функции-Массивы)\n\n";
	cout << OFFSET << "        (Милькин Сергей, группа СБД121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
}


float ReversePrint(float arrays[], int razm)
{
	cout << setw(30) << "Обратный вывод: ";
	float b = 0; int c = 0; int i;
	for (int i = 0; i < (razm / 2); i++)
	{
		b = arrays[razm - i - 1];
		arrays[razm - i - 1] = arrays[i];
		arrays[i] = b;
	}

	for (i = 0; i < razm; i++)
	{
		c = arrays[i];
		cout << c << " ";
	}
	cout << endl;
	return 0;
}


float Sum(float array_sum[], int razm)
{
	float summa = 0;
	for (int i = 0; i < razm; i++)
	{
		summa += array_sum[i];
	}
	//cout << "Сумма элементов массива: " << summa;
	return summa;
}
float Avg(float array_avg[], int razm)
{
	float summa = 0, srednee;
	for (int i = 0; i < razm; i++)
	{
		summa += array_avg[i];
	}
	srednee = summa / razm;
	return srednee;
	//cout << "Среднее арифметическое элементов массива: " << srednee << endl;
}
float minValueInt(float array_min[], int razm)
{
	float min = array_min[0];
	for (int i = 0; i < razm; i++)
	{
		if (min > array_min[i])
			min = array_min[i];
	}
	//cout << "Минимальное значение: " << min << endl;
	return min;
}
float maxValueInt(float array_max[], int razm)
{
	float max = array_max[0];
	//float array_max[4] = { 1,2,3,8 };
	for (int i = 0; i <= razm; ++i)
	{
		if (max < array_max[i])
			max = array_max[i];
	}
	//cout << "Максимальное значение: " << max <<endl;
	return max;
}

float Sort(float array_sort[], int razm)
{
	cout << setw(30) << "Сортировка по возрастанию: ";
	for (int i = 0; i < razm; i++)
	{
		int min = i;
		for (int j = i + 1; j < razm; j++)
		{
			if (array_sort[j] < array_sort[min])
				min = j;
		}
		float tmp_sort = array_sort[i];
		array_sort[i] = array_sort[min];
		array_sort[min] = tmp_sort;
		cout << array_sort[i] << " ";
	}
	cout << endl;
	return 0;
}
float ShiftLeft(float array_left[], int razm, int sdvig_l)
{
	cout << setw(30) << "Циклический сдвиг влево: ";
	for (int j = 1; j <= sdvig_l; ++j)
	{
		float x = array_left[0];
		for (int i = 0; i < razm - 1; i++)
		{
			array_left[i] = array_left[i + 1];
		}
		array_left[razm - 1] = x;
	}
	for (int i = 0; i < razm; i++)
	{
		cout << array_left[i] << " ";
	}
	cout << endl;
	return 0;
}
float ShiftRight(float array_right[], int razm, int sdvig_p)
{
	cout << setw(30) << "Циклический сдвиг вправо: ";
	for (int j = 1; j <= sdvig_p; j++)
	{
		float x = array_right[razm - 1];
		for (int i = razm - 1; i >= 0; i--)
		{
			array_right[i + 1] = array_right[i];
		}
		array_right[0] = x;
	}
	for (int i = 0; i < razm; i++)
	{
		cout << array_right[i] << " ";
	}
	return 0;
	cout << endl;
}
