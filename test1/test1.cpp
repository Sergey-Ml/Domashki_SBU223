#include<iostream>
using namespace std;

double vvod_chisel();
double vyrazhenie();
double skobki();
double oper();

int main()

{
	setlocale(LC_ALL, "Russian");
	cout << " ������� ���������: ";
	double res = vyrazhenie();
	cout << " ���������: " << res << endl;
}


