//Обчислити довжину кола і площу круга за заданим діаметром.
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double diameter;

    cout << "Введіть діаметр кола: ";
    cin >> diameter;
    double pi = 3.14159;
    double perimeter = pi * diameter;
    double area = pi * diameter * 2;

    cout << "Довжина кола: " << perimeter << endl;
    cout << "Площа круга: " << area << endl;

    return 0;
}

