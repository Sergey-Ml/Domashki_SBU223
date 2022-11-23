#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"repchar.h"
#include"Print_ReversePrint.h"
#include"Print_ReversePrint.cpp" // Без ЭТОГО не работает (ошибка 2019) ПОЧЕМУ??? ( я косячу или это особенности шаблонов?)
#include"Statistics.h"
#include"Statistics.cpp" // и Без ЭТОГО не работает (ошибка 2019) ПОЧЕМУ??? ( я косячу или это особенности шаблонов?)
#include"Shift.h"
#include"Shift.cpp" // и Без ЭТОГО не работает (ошибка 2019) ПОЧЕМУ??? ( я косячу или это особенности шаблонов?)
#include"Sort.h"
#include"Sort.cpp" // и Без ЭТОГО не работает (ошибка 2019) ПОЧЕМУ??? ( я косячу или это особенности шаблонов?)
#include"UniqueRand.h" 
#include"UniqueRand.cpp" // и Без ЭТОГО не работает (ошибка 2019) ПОЧЕМУ??? ( я косячу или это особенности шаблонов?)
#include"Search.h"
#include"Search.cpp" // и Без ЭТОГО не работает (ошибка 2019) ПОЧЕМУ??? ( я косячу или это особенности шаблонов?)


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
