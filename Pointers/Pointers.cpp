#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int* pa = &a;
	cout << a << endl; //вывод значения переменной "a" на экран 
	cout << &a << endl; // получение адреса переменной "a" прямо при выводе
	cout << pa << endl; // выводим фдрес переменной 'a', хранящ в указателе ра
	cout << *pa << endl; // разыменовываем указатель 'pa' и получаем значение, котор хран по адресу

}