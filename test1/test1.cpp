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
	bool unique; //����� ���������?
	unique = false;
	cout << "�������������� ������: ";
	cout << endl;
	int povtor = 0;

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (55 - 50) + 55;

		cout << array[i] << "  ";

		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				//unique = true;

				//break;
				++povtor;
				//array1[i] = array[i];
			}

		}
		//cout << "����� ������" << array1[i];

	}
	cout << endl;
	//cout <<"���������� ������������� ���������: " << povtor;


}

//bool unique; //����� ���������?
		//do
		//{
		//	//array[i] = rand() % (maxRand - minRand) + minRand;
//unique = true; // ������������, ��� ����� ���������, �� ��� ����� ���������

//	for (int j = 0; j < i; j++)
//	{
//		if (array[i] == array[j])
//		{
//			unique = false;
//			break;
//		}
//	}
//} while (!unique);