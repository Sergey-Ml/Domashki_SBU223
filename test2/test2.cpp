#include<iostream>
#include <conio.h>
//#define While
#//define While2
#define Escape 27
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
#ifdef While
    int i = 0;
    int n;
    cout << "Введите количество итераций: ";
    cin >> n;
    while (i<n)
    {
        cout << i <<"HelloWorld\n";
        i++;
    }
#endif While
#ifdef While2
    int n; // Кол-во итераций
    cout << " Введите кол-во итераций: ";
    cin >> n;
    while (n--)
    {
        cout << n << " \t";
    }
    cout << endl;
#endif // While2
    char key; // переменная будет хранить код клавиши
    do
    {
        key = _getch();
        cout << (int)key << "\t" << key << endl;
        (int)key;
    } while (key != Escape);
    
}

