// Lab_03_3.cpp
// Синчук Іван
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // результат обчислення виразу
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -4)
        y = -2; 
    else if (-4 < x && x <= 0)
        y = (1.0 / 2) * x - 2; 
    else if (0 < x && x <= 2)
        y = x * x; 
    else if (2 < x && x <= 10)
        y = -(1.0 / 2) * x + 5; 
    else
        y = 0; 

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
