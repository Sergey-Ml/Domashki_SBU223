//Shooter
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
void main()
{
	setlocale(LC_ALL, "Russian");
	char key; //����� ������� ��� �������
	cout << OFFSET << "=============+++==============================================\n\n";
	cout << OFFSET << "     ��������� 3Dschooter (������� ������, ������ ���223)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t" << "� ���� Windows ����� �� MacBook, ������� ������� � �� ���� ��� ������� ��������� ����� �� ��������� � ������\n";
	cout << "\t\t\t\t\t" << "  ��� ������ �� ��������� ������� Esc\n\n";
	do
	{
		key = _getch();

		switch (key)
		{
		case 'w':
			cout << key << " - ����� ������ ��� ������\t" << endl;
			break;

		case '�':
			cout << key << " - ����� ������ ��� ������ (�� ������� ���������)\t" << endl;
			break;
		case 's':
			cout << key << " - ����� ������ ��� ����� \t" << endl;
			break;

		case '�':
			cout << key << " - ����� ������ ��� ����� (�� ������� ���������)\t" << endl;
			break;
		case 'a':
			cout << key << " - ����� ������ ��� �����\t" << endl;
			break;

		case '�':
			cout << key << " - ����� ������ ��� ����� (�� ������� ���������)\t" << endl;
			break;

		case 'd':
			cout << key << " - ����� ������ ��� ������\t" << endl;
			break;

		default:
			if (key != 32)
			{
				if (key != 13)
				{
					if (key != -94)
						cout << key << " - � ������ �������� : ��� ��� ������\t" << endl;
					else
						cout << key << " - ����� ������ ��� ������ (�� ������� ���������)\t" << endl;
				}

				else
					cout << "Enter - ����� ���������\t" << endl;
			}
			else
				cout << "������ - ����� �������\t" << endl;

		}


	} while (key != 27);
}

