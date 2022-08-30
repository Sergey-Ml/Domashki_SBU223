#include <iostream>
#include <conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; // код клавиши
	int otvet; // пункт меню
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "                  Домашнее задание Массивы\n\n";
	cout << OFFSET << "                Милькин Сергей, группа СБУ 223\n\n";
	cout << OFFSET << "===============================================================\n\n";
	cout << "\t\t\t\t\t" << " Выберите пункт меню и нажмите ENTER\n";
	cout << "\t\t\t\t\t" << " Для выхода из программы нажмите Esc\n\n";

	do
	{
		cout << OFFSET << "===============================================================\n\n";
		cout << OFFSET << "1.   Вывести введенный массив \n\n";
		cout << OFFSET << "2.   Вывести массив в обратном порядке\n\n";
		cout << OFFSET << "3.   Вычислить сумму элементов массива\n\n";
		cout << OFFSET << "4.   Вычислить среднее-арифметическое элементов массива\n\n";
		cout << OFFSET << "5.   Найти минимальное и максимальное значение в массиве\n\n";
		cout << OFFSET << "6.   Выполнить все задания сразу\n\n";
		cout << OFFSET << "Esc. Выход\n\n";
		cout << OFFSET << "===============================================================\n\n";
		otvet = _getch() - 48;

		// Задача 1
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "1.   Вывод на экран введенного с клавиатуры массива \n\n";
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
				int razm;
				cin >> razm;

				while (razm > 100 || razm <= 0)
				{
					cout << " Размер массива может быть от 1 до 100! " << endl;
					cout << " Введите снова: ";
					cin >> razm;
				}
				const int size = 100;
				float array[size] = { 0 };

				for (int i = 0; i < razm; i++)
				{
					cout << " Введите элементы массива в количестве " << razm - i << ":" << endl;
					cin >> array[i];
				}
				cout << "---------------------------------------------------\n";
				cout << "Введенный массив: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;

			}
		}
		// Задача 2
		if (otvet == 2)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "2.   Вывод массива в обратном порядке\n\n";
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
				int razm;
				cin >> razm;

				while (razm > 100 || razm <= 0)
				{
					cout << " Размер массива может быть от 1 до 100! " << endl;
					cout << " Введите снова: ";
					cin >> razm;
				}
				const int size = 100;
				float array[size] = { 0 };

				for (int i = 0; i < razm; i++)
				{
					cout << " Введите элементы массива в количестве " << razm - i << ":" << endl;
					cin >> array[i];
				}
				cout << "---------------------------------------------------\n";
				cout << "Введенный массив: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;
				cout << "---------------------------------------------------\n";
				cout << "Вывод массива в обратном порядке: ";
				float temp;
				for (int i = 0; i < (razm / 2); i++)
				{
					temp = array[razm - i - 1];
					array[razm - i - 1] = array[i];
					array[i] = temp;
				}

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;

			}
		}

		// Задача 3
		if (otvet == 3)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "3.   Вычисление суммы элементов массива \n\n";
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
				int razm;
				cin >> razm;

				while (razm > 100 || razm <= 0)
				{
					cout << " Размер массива может быть от 1 до 100! " << endl;
					cout << " Введите снова: ";
					cin >> razm;
				}
				const int size = 100;
				float array[size] = { 0 };

				for (int i = 0; i < razm; i++)
				{
					cout << " Введите элементы массива в количестве " << razm - i << ":" << endl;
					cin >> array[i];
				}
				cout << "---------------------------------------------------\n";
				cout << "Введенный массив: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;

				cout << "---------------------------------------------------\n";
				cout << "Сумма элементов массива: ";
				float summa = 0;
				for (int i = 0; i < razm; i++)
				{
					summa += array[i];
				}
				cout << summa;
				cout << endl;

			}
		}

		// Задача 4
		if (otvet == 4)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "4.   Вычисление среднего-арифметического элементов массива \n\n";
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
				int razm;
				cin >> razm;

				while (razm > 100 || razm <= 0)
				{
					cout << " Размер массива может быть от 1 до 100! " << endl;
					cout << " Введите снова: ";
					cin >> razm;
				}
				const int size = 100;
				float array[size] = { 0 };

				for (int i = 0; i < razm; i++)
				{
					cout << " Введите элементы массива в количестве " << razm - i << ":" << endl;
					cin >> array[i];
				}
				cout << "---------------------------------------------------\n";
				cout << "Введенный массив: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;

				cout << "---------------------------------------------------\n";
				cout << "Среднее арифметическое элементов массива: ";
				float summa = 0;
				for (int i = 0; i < razm; i++)
				{
					summa += array[i];
				}
				cout << summa / razm;
				cout << endl;

			}
		}


		// Задача 5
		if (otvet == 5)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "5.   Найти минимальное и максимальное значение в массиве  \n\n";
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
				int razm;
				cin >> razm;

				while (razm > 100 || razm <= 0)
				{
					cout << " Размер массива может быть от 1 до 100! " << endl;
					cout << " Введите снова: ";
					cin >> razm;
				}
				const int size = 100;
				float array[size] = { 0 };

				for (int i = 0; i < razm; i++)
				{
					cout << " Введите элементы массива в количестве " << razm - i << ":" << endl;
					cin >> array[i];
				}
				cout << "---------------------------------------------------\n";
				cout << "Введенный массив: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;

				cout << "---------------------------------------------------\n";
				cout << "Минимальное значение: ";

				for (int i = 0; i < razm; i++)
				{
					if (array[0] > array[i])
						array[0] = array[i];
				}
				cout << array[0];
				cout << endl;
				cout << "Максимальное значение: ";

				for (int i = 0; i < razm; i++)
				{
					if (array[0] < array[i])
						array[0] = array[i];
				}
				cout << array[0];
				cout << endl;

			}
		}

		// Задача 6
		if (otvet == 6)
		{
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "6.   Выполнить все задачи сразу  \n\n";
				cout << OFFSET << "===============================================================\n\n";
				cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
				int razm;
				cin >> razm;

				while (razm > 100 || razm <= 0)
				{
					cout << " Размер массива может быть от 1 до 100! " << endl;
					cout << " Введите снова: ";
					cin >> razm;
				}
				const int size = 100;
				float array[size] = { 0 };

				for (int i = 0; i < razm; i++)
				{
					cout << " Введите элементы массива в количестве " << razm - i << ":" << endl;
					cin >> array[i];
				}
				cout << "---------------------------------------------------\n";
				cout << "Введенный массив: ";

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;

				cout << "---------------------------------------------------\n";
				cout << "Вывод массива в обратном порядке: ";
				float temp;
				for (int i = 0; i < (razm / 2); i++)
				{
					temp = array[razm - i - 1];
					array[razm - i - 1] = array[i];
					array[i] = temp;
				}

				for (int i = 0; i < razm; i++)
				{
					cout << array[i] << " ";
				}
				cout << endl;


				cout << "Сумма элементов массива: ";
				float summa = 0;
				for (int i = 0; i < razm; i++)
				{
					summa += array[i];
				}
				cout << summa;
				cout << endl;



				cout << "Среднее арифметическое элементов массива: ";

				cout << summa / razm;
				cout << endl;


				float min , max;
				min = max = array[0];
				for (int i = 0; i < razm; i++)
				{
					if (array[i] < min)
					{
						min = array[i];
					}
					if (array[i] > max)
					{
						max = array[i];
					}
										
				}
				cout << "Минимальное значение: " << min << endl;
				cout << "Максимальное значение: " << max << endl;

			}
		}
		key = _getch();
	} while (key != 27);

}