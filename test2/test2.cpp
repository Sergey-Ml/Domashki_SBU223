#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

const int ROWS = 100;
const int COLS = 100;
void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand=100);
void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS);

int main()
{
	setlocale(LC_ALL, "Russian");

	
	cout << "������� ���������� �����: ";
	int RAZM_ROWS;
	cin >> RAZM_ROWS;

	while (RAZM_ROWS > 100 || RAZM_ROWS <= 0)
	{
		cout << " ���������� ����� ����� ���� �� 1 �� 100!" << endl;
		cout << " ������� �����: ";
		cin >> RAZM_ROWS;
	}
	cout << endl;

	cout << "������� ���������� ��������: ";
	int RAZM_COLS;
	cin >> RAZM_COLS;
	cout << endl;
	while (RAZM_COLS > 100 || RAZM_COLS <= 0)
	{
		cout << " ���������� �������� ����� ���� �� 1 �� 100!" << endl;
		cout << " ������� �����: ";
		cin >> RAZM_COLS;
	}
	cout << endl;
	int array_2[ROWS][COLS];

	int minRand_Fill, maxRand_Fill;
	cout << setw(30) << "������� �������� ������� ��� ��������� ����� �� : ";
	cin >> minRand_Fill;
	cout << endl;
	cout << setw(30) << "������� �������� ������� ��� ��������� ����� ��: ";
	cin >> maxRand_Fill;
	
	FillRand(array_2, RAZM_ROWS, RAZM_COLS,minRand_Fill,maxRand_Fill);
	
	cout << setw(30) << " C������������� ������: " << endl;
	Print(array_2, RAZM_ROWS, RAZM_COLS);
	cout << endl;


}

void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand_Fill, int maxRand_Fill)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array_2[i][j] = rand() % (maxRand_Fill - minRand_Fill) + minRand_Fill;
		}
	}
}

void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout<< setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}