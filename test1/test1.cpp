#include <iostream>
using namespace std;

double number()
{
    double res = 0;
    for (;;)
    {
        char c = cin.get();
        if (c >= '0' && c <= '9')
            //res = res * 10 + c - '0';
            res = res + c - '0';
        else
        {
            cin.putback(c);
            return res;
        }
    }
}

double expr();

double skobki()
{
    char c = cin.get();
    if (c == '(')
    {
        double x = expr();
        cin.get();
        return x;
    }
    else
    {
        cin.putback(c);
        return number();
    }
}

float factor()
{
    double x = skobki();
    for (;;)
    {
        char c = cin.get();
        switch (c)
        {
        case '*':
            x *= skobki();
            break;
        case '/':
            x /= skobki();
            break;
        default:
            cin.putback(c);
            return x;
        }
    }
}

double expr()
{
    double x = factor();
    for (;;)
    {
        char c = cin.get();
        switch (c)
        {
        case '+':
            x += factor();
            break;
        case '-':
            x -= factor();
            break;
        default:
            cin.putback(c);
            return x;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите выражение: ";
    double res = expr();
    cout << "Результат: " << res << endl;
}