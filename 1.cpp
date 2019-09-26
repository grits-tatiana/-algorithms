/*
Вывести квадраты натуральных чисел от 1 до n, используя только O(n) операций сложения и
вычитания (умножением пользоваться нельзя).
n ≤ 1000.
*/

#include <iostream>

using namespace std;

int main()
{
    int square = 0, delta = 0, n;
    cout << "Введите n:" << endl;
    cin >> n;
    cout<<"Квадраты чисел от 1 до n"<<endl;
    for (int i = 0; i < n; i++)
    {
        delta = i + i + 1;
        square += delta;
        cout << square << " ";
    }
    return 0;
}