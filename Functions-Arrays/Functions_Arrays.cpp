#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Shift.h"
#include "Sort.h"
#include "Uniq.h"
#include "repchar.h"


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

	UniqueRand(array, razm, 10,100);
	cout << setw(30) << " Уникальные числа:  ";
	Print(array, razm);
	cout << endl;

	repchar('=', 88);
	

}
