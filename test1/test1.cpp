#include <iostream>
using namespace std;
#include <math.h>
int main()

{
	setlocale(LC_ALL, "Russian");

	cout << "     ������� �������� �����:  ";

	int vvod, temp, razr = 0, j = 0, array[10], sum = 0, result = 1, exp;
	cin >> vvod;
	temp = vvod;
	cout << " �������� ����� " << temp << " � ���������� ������� ����� :  ";
	//���-�� �������� �� ��������� �����
	while (vvod != 0)
	{
		vvod /= 10;
		++razr;
	}
	//cout << razr << "|";

	//cout << endl;
	// �������� ��������� ����� � ������
	do
	{
		array[j++] = temp % 10;
		temp /= 10;

	} while (temp != 0);

	exp = razr - 1;

	for (int i = j - 1; i >= 0; i--)
	{
		result = pow(2, exp);
		--exp;
		array[i] *= result;
		//cout << array[i] << " + ";
	}

	//cout << endl;

	for (int i = 0; i < razr; i++)
	{
		sum += array[i];
		
	}

	cout << sum << endl;
}