#pragma once
#ifndef MIN_H
#define MIN_H

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

extern "C" {

    
    DLL_EXPORT double min»ÁTwo(double a, double b);
}

#endif 
