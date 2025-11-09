#pragma once

#ifdef DLL5_EXPORTS
#define DLL5_API __declspec(dllexport)
#else
#define DLL5_API __declspec(dllimport)
#endif

#include <iostream>

extern "C" {
    DLL5_API void генераци€(int* arr, int size);
    DLL5_API void выводћассив(const int* arr, int size);
    DLL5_API int minЁлементћассив(const int* arr, int size);
}

class DLL5_API MinArray
{
public:
    static int findMin(int arr[], int size);
};