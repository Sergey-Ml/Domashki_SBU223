#include <iostream>
#include <iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "                ��������� ����������� �����  \n\n";
	cout << OFFSET << "===============================================================\n\n";
	cout << OFFSET << "     ������� ������ ������� (�� ����� 100 ���������):  ";
	int razm;
	cin >> razm;


	while (razm > 100 || razm <= 0)
	{
		cout << " ������ ������� ����� ���� �� 1 �� 100! ";
		cout << " ������� �����: ";
		cin >> razm;
		cout << endl;
	}
	const int size = 100;
	float array[size] = { 0 };
	for (int i = 0; i < razm; i++)
	{
		cout << " ������� " << i + 1 << "-� ������� �������:  ";
		cin >> array[i];
	}

	cout << " ������� ����� ������ �����:   ";
	int sdvig_l;
	cin >> sdvig_l;

	cout << setw(10) << " ������� ����� ������ ������:  ";
	int sdvig_p;
	cin >> sdvig_p;

	cout << "----------------------------------------------\n\n";

	cout << setw(30) << "��������� ������: ";
	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	cout << setw(30) << " ����������� ����� �����: ";

	for (int j = 1; j <= sdvig_l; j++)
	{
		float temp = array[0];
		for (int i = 0; i < razm - 1; i++)
		{
			array[i] = array[i + 1];
		}
		array[razm - 1] = temp;
	}
	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	cout << setw(30) << " ����������� ����� ������: ";

	for (int j = 1; j <= sdvig_p + sdvig_l; j++)
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