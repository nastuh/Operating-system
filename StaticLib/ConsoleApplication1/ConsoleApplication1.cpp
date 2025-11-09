#include <iostream>
#include "../StaticLib/Min.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Минимальное число: " << minOfTwo(num1, num2) << endl;

    return 0;
}