#include <iostream>
#include <conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
//#define Stepen
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; // ��� �������
	int otvet; // ����� ����
	cout << OFFSET << "==============================================================\n\n";
	cout << OFFSET << "     ������� (������� ������, ������ ���223)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t\t\t\t\t" << "  �������� ����� ���� � ������� Enter\n\n";
	cout << "\t\t\t\t\t" << "  ��� ������ �� ��������� ������� Esc\n\n";
	do
	{
		cout << OFFSET << "==============================================================\n\n";
		cout << OFFSET << " 1.    �������� ����� � �������\n\n";
		cout << OFFSET << " 2.    ������� ASCII - �������\n\n";
		cout << OFFSET << " 3.    ��� ��������� �� ���������� �������\n\n";
		cout << OFFSET << " 4.    �������� ���-�� ����� ���� ���������\n\n";
		cout << OFFSET << " 5.    ��� ������� ����� �� ���������� �������\n\n";
		cout << OFFSET << " 6.    ������� ���������\n\n";
		cout << OFFSET << " 7.    ������� ��������\n\n";
		cout << OFFSET << " Esc.  �����\n\n";
		cout << OFFSET << "==============================================================\n\n";

		// ������ ������ - ������� �����
		otvet = _getch() - 48;
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
			{
				cout << OFFSET << "==============================================================\n\n";
				cout << OFFSET << "                     ������� �����\n\n";
				cout << OFFSET << "==============================================================\n\n";
				cout << "\t\t\t\t\t" << "  ������� ����� � �������: \n\n";
				double chislo;
				int stepen;
				cin >> chislo >> stepen;
				double result = chislo;

				if (stepen > 0)
				{
					for (int i = 1; i < stepen; i++)
					{
						result *= chislo;

					}
					cout << "\t\t\t\t\t\t" << chislo << " ^ " << stepen << " = " << result << "\n";
				}
				if (stepen < 0)
				{
					for (int i = 1; i < -stepen; i++)
					{
						result *= chislo;

					}

					cout << "\t\t\t\t\t\t" << chislo << " ^ " << stepen << " = " << "1/" << result << " = " << 1 / result << endl;
				}
				if (stepen == 0 && stepen == -0)
				{
					cout << "\t\t\t\t\t" << " ����� ����� � ������� ������� ��������� �������\n";
				}
			}
		}




		key = _getch();
	} while (key != 27);
}
