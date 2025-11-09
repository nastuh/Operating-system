#include <iostream>
#include "../Dll2/Min.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;

    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    
    double minValue = minИзTwo(num1, num2);

    
    cout << "Минимальное число: " << minValue << endl;

    return 0;
}