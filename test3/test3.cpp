#include <iostream>
using namespace std;
#include <math.h>
int main()

{
	setlocale(LC_ALL, "Russian");

	//cout << " Введите размер массива (не больше 100):  ";

	const int size = 10;
	int array[size];
	int array1[size];
	//int minRand, maxRand;
	//cout << "Введите диапазон массива для уникальных чисел от: ";
	//cin >> minRand;
	//cout << endl;
	//cout << "Введите диапазон массива для уникальных чисел до: ";
	//cin >> maxRand;
	bool unique; 
	unique = true;
	
	cout << "Сформированный массив: ";

	int povtor = 0;
	int povtor1 = 0;

	

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (50 - 55) + 55;

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
	cout << "Повторяющиеся элементы: ";

	for (int i = 0; i < size; i++)
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





