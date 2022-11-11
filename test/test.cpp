#include<iostream>
#include <conio.h> 
using namespace std;
const int ROWS = 5;
const int COLS = 5;
void Search(int array[ROWS][COLS], const int ROWS, const int COLS);
int main()
{

	setlocale(LC_ALL, "");
	
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			{
				arr[i][j] = rand() % 4 + 1;
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}		
	Search(arr, ROWS, COLS);
		
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	cout << endl;
	int povtor ;
	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < COLS; k++)
		{
			povtor = 0;
			for (int j = 0; j < ROWS; j++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[i][k] == arr[j][l] && arr[i][k] != 0)
					{
						povtor++;
						if (j != i || k != l)
						{
							arr[j][l] = 0;
						}
					}
				}
			}
			if (povtor !=0)
			cout << arr[i][k] << " повторяется " << povtor << "раза" << endl;
		arr[i][k] = 0;
		}
			
		
	}

}