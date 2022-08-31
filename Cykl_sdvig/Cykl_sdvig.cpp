#include <iostream>
#include <iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "                Выполнить циклический сдвиг  \n\n";
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "     Введите размер массива (не более 100 элементов): \n";
	int razm;
	cin >> razm;
	cout << endl;

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
		cout << " Введите " << i + 1 << "-й элемент массива:  ";
		cin >> array[i];
	}

	cout << " Введите число сдвига влево:   ";
	int sdvig_l;
	cin >> sdvig_l;

	cout << " Введите число сдвига вправо:  ";
	int sdvig_p;
	cin >> sdvig_p;

	cout << "----------------------------------------------\n\n";

	cout << setw(30) << "Введенный массив: ";
	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	cout << setw(30) << " Циклический сдвиг влево: ";

	for (int j = 1; j <= sdvig_l; j++)
	{
		float temp = array[0];
		for (int i = 0; i < razm; i++)
		{
			array[i] = array[i + 1];
		}
		array[razm - 1] = temp;
	}
	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout <<endl; 
	cout << setw(30) << " Циклический сдвиг вправо: ";

	for (int j = 1; j <= sdvig_l; j++)
	{
		float temp = array[razm-1];
		for (int i = razm-1; i >=0; i--)
		{
			array[i+1] = array[i];
		}
		array[0] = temp;
	}
	for (int j = 1; j <= sdvig_p; j++)
	{
		float temp = array[razm - 1];
		for (int i = razm - 1; i >= 0; i--)
		{
			array[i + 1] = array[i];
		}
		array[0] = temp;
	}


	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;


}