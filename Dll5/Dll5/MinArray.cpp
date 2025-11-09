#include "pch.h"
#include "MinArray.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>  // дл€ INT_MAX

// –еализаци€ функций с русскими именами
void генераци€(int* arr, int size) {
    if (arr == nullptr || size <= 0) return;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 200 - 100;
    }
}

void выводћассив(const int* arr, int size) {
    if (arr == nullptr || size <= 0) return;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int minЁлементћассив(const int* arr, int size) {
    if (arr == nullptr || size <= 0) return -1;
    int minVal = INT_MAX;
    int minIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0 && arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

// –еализаци€ метода класса
int MinArray::findMin(int arr[], int size)
{
    if (size == 0) return 0;

    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}