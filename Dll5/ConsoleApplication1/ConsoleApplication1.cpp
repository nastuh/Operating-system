#include <iostream>
#include "../Dll5/MinArray.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int arr[size];

    // Использование функций с русскими именами
    генерация(arr, size);

    std::cout << "Сгенерированный массив: ";
    выводМассив(arr, size);

    int minIndex = minЭлементМассив(arr, size);
    if (minIndex != -1) {
        std::cout << "Индекс минимального положительного элемента: " << minIndex << std::endl;
        std::cout << "Значение: " << arr[minIndex] << std::endl;
    }
    else {
        std::cout << "Положительных элементов не найдено" << std::endl;
    }

    // Использование класса
    int min = MinArray::findMin(arr, size);
    std::cout << "Абсолютный минимум: " << min << std::endl;

    return 0;
}