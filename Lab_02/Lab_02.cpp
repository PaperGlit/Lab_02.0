// Lab_02.cpp
// Лазар Владислав
// Лабораторна робота №2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    double a; //Вхідне число
    double z1; //Вихідне число #1
    double z2; //Вихідне число #2

    cout << "a="; cin >> a; //Уведення вхідного числа

    z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a)); //Дія над числом #1
    z2 = (1 - tan(a)) / (1 + tan(a)); //Дія над числом #2

    cout << "z1=" << z1 << endl;  //Виведення вихідного числа #1
    cout << "z2=" << z2 << endl;  //Виведення вихідного числа #2

    if (fabs(z1 - z2) < 0.0000001) //Перевірка чи вихідні числа є рівними
    {
        cout << "Числа рівні" << endl;
    }
    else
    {
        cout << "Числа нерівні" << endl;
    }

    return 0; //Кінець програми
}