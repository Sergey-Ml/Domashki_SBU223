#include<iostream>
#include<iomanip>
using namespace std;
#define OFFSET "\t\t\t\t"

const int ROWS = 3;
const int COLS = 6;
void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS);
void Search(int array_2[ROWS][COLS], const int ROWS, const int COLS);

int main()
{
	setlocale(LC_ALL, "Russian");



	//cout << "Введите количество столбцов: ";
	//int RAZM_COLS;
	//cin >> RAZM_COLS;
	//cout << endl;
	//while (RAZM_COLS > 100 || RAZM_COLS <= 0)
	//{
	//	cout << " Количество столбцов может быть от 1 до 100!" << endl;
	//	cout << " Введите снова: ";
	//	cin >> RAZM_COLS;
	//}
	//cout << endl;*/
	int array_2[ROWS][COLS] =
	{
		{1,2,3,4,2,3},
		{7,9,9,7,7,1},
		{1,3,7,9,9,9}

	};
	Print(array_2, ROWS, COLS);
	Search(array_2, ROWS, COLS);

}


void Print(int array_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << setw(8) << array_2[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

}

void Search(int array_2[ROWS][COLS], const int ROWS, const int COLS)


{
	int povtor=0;
	bool unique;
	unique = true;

	
	cout << "Повторяющиеся элементы: " << "  " ;
	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < j; k++)
			{
				for (int l = 0; l < COLS; l++)
				//for (int l = k == i ? j + 1 : 0; l < COLS; l++)  //уменьшаем кол-во итераций
				{

					//array_2[i][j] -  выбранный элемент
					//array_2[k][l] -  перебираемый элемент
					if (array_2[k][l] == array_2[i][j])
						
					{
						
						cout << array_2[k][l] << "  ";
						unique = false;
						
						//povtor = array_2[k][l];

						//cout << povtor << endl;
						//povtor = 0;
						break;
						
					}
					
					
				}
			}
			
		}
		
	}

	//for (int i = 0; i < ROWS; i++)
	//	
	//{
	//	for (int j = 0; j < COLS; j++)
	//	{
	//		for (int k = i; k < ROWS; k++)
	//		{
	//			for (int l = k == i ? j + 1 : 0; l < COLS; l++) //уменьшаем кол-во итераций
	//			{
	//				//array_2[i][j] -  выбранный элемент
	//				//array_2[k][l] -  перебираемый элемент
	//				if (array_2[k][l] == array_2[i][j])
	//				{
	//					unique = false;
	//					povtor++;
	//					cout << array_2[k][l] <<  endl;
	//					break;

	//				}
	//				
	//			}
	//		}
	//	}

	//}

} 