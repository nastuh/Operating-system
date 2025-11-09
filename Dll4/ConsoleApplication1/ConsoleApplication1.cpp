#include <iostream>
#include "../DLL4/Массив.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    const int size = 10;
    int arr[size];

    
    generateМассив(arr, size);

   
    cout << "Исходный массив: ";
    printМассив(arr, size);

    
    sortМассив(arr, size);

    
    cout << "Отсортированный массив: ";
    printМассив(arr, size);

    return 0;
}