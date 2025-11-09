#include <iostream>
#include <windows.h>
#include "../Dll3/StringLength.h"
using namespace std;

typedef int (*MaxLengthFunc)(const char*, const char*, const char*, const char*);

int main() {
    setlocale(LC_ALL, "Russian");
    // Загружаем DLL
    HMODULE hLib = LoadLibrary(TEXT("StringLength.dll"));
 

    // Ввод строк
    char s1[256], s2[256], s3[256], s4[256];
    cout << "Введите 4 строки:" << endl;
    cin.getline(s1, 256);
    cin.getline(s2, 256);
    cin.getline(s3, 256);
    cin.getline(s4, 256);

    // Вызов функции
    
    int maxLen = max_length(s1, s2, s3, s4);
        cout << "Длина самой длинной строки: " << maxLen << endl;
  

    // Освобождение DLL
    FreeLibrary(hLib);
    return 0;
}