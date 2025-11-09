#include <iostream>
#include <windows.h>
#include "../DLL/Calculator.h"

typedef double (*CalcFunc)(double, double);

int main() {
    setlocale(LC_ALL, "Russian");
   

    HMODULE hLib = LoadLibrary(TEXT("Calculator.dll"));

    double num1, num2;
    char op;

    std::cout << "Введите выражение в формате число оператор число: ";
    std::cin >> num1 >> op >> num2;

    double result;
    try {
        switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2); 
            break;
        default:
            std::cerr << "Неподдерживаемая операция" << std::endl;
            FreeLibrary(hLib);
            return 1;
        }
        std::cout << "Результат: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    
    FreeLibrary(hLib);
    return 0;
}