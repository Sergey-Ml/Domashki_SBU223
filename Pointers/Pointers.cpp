#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int* pa = &a;
	cout << a << endl; //����� �������� ���������� "a" �� ����� 
	cout << &a << endl; // ��������� ������ ���������� "a" ����� ��� ������
	cout << pa << endl; // ������� ����� ���������� 'a', ������ � ��������� ��
	cout << *pa << endl; // �������������� ��������� 'pa' � �������� ��������, ����� ���� �� ������

}