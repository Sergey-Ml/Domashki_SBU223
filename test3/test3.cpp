#include <iostream>
using namespace std;
#include <math.h>
int main()

{
	setlocale(LC_ALL, "Russian");

	//cout << " ������� ������ ������� (�� ������ 100):  ";

	const int size = 10;
	int array[size];
	int array1[size];
	//int minRand, maxRand;
	//cout << "������� �������� ������� ��� ���������� ����� ��: ";
	//cin >> minRand;
	//cout << endl;
	//cout << "������� �������� ������� ��� ���������� ����� ��: ";
	//cin >> maxRand;
	bool unique; 
	unique = true;
	
	cout << "�������������� ������: ";

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
	cout << "���������� ����������: " << povtor << endl;
	cout << "������������� ��������: ";

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





