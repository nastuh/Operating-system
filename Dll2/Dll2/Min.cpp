#include "pch.h"
#include "Min.h"

extern "C" {

    DLL_EXPORT double min»ÁTwo(double a, double b) {
        return (a < b) ? a : b;
    }
}