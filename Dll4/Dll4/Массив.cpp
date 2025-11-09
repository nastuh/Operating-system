#include "pch.h"
#include "Массив.h"
#include <iostream>
#include <cstdlib> // для rand()
#include <ctime>   // для time()

// Инициализация генератора случайных чисел при загрузке DLL
__declspec(dllexport) void generateМассив(int* arr, int size) {
    if (arr == nullptr || size <= 0) return;
    std::srand(std::time(nullptr)); // инициализация генератора
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 100; // числа от 0 до 99
    }
}

// Вывод массива
__declspec(dllexport) void printМассив(const int* arr, int size) {
    if (arr == nullptr || size <= 0) return;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

// Сортировка пузырьком
__declspec(dllexport) void sortМассив(int* arr, int size) {
    if (arr == nullptr || size <= 1) return;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // обмен значений
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}