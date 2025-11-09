#pragma once
#ifndef STRING_LENGTH_H
#define STRING_LENGTH_H

#ifdef STRINGLENGTH_EXPORTS
#define STRINGLENGTH_API __declspec(dllexport)
#else
#define STRINGLENGTH_API __declspec(dllimport)
#endif

extern "C" {

	// Функция для вычисления длины самой длинной строки из четырех
	STRINGLENGTH_API int max_length(const char* s1, const char* s2, const char* s3, const char* s4);

}

#endif // STRING_UTILS_H