#pragma once
#ifndef ÌÀÑÑÈÂ_H
#define ÌÀÑÑÈÂ_H

#ifdef _WIN32 
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

extern "C" {

    
    DLL_EXPORT void generateÌàññèâ(int* arr, int size);

    
    DLL_EXPORT void printÌàññèâ(const int* arr, int size);

    
    DLL_EXPORT void sortÌàññèâ(int* arr, int size);
}

#endif 
