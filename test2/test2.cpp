#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string line;
    cout << " ¬ведите число: ";
    cin >> line;
    char A = 'A';
    int B = 49;
      for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == A)
        {

            line[i] = B;
        }
    }
    cout << line;
}

