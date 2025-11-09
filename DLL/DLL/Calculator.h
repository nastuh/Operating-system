#ifndef CALCULATOR_H
#define CALCULATOR_H

#ifdef CALCULATOR_EXPORTS
#define CALCULATOR_API __declspec(dllexport)
#else
#define CALCULATOR_API __declspec(dllimport)
#endif

extern "C" {

	// Функции для арифметических операций
	CALCULATOR_API double add(double a, double b);
	CALCULATOR_API double subtract(double a, double b);
	CALCULATOR_API double multiply(double a, double b);
	CALCULATOR_API double divide(double a, double b);

}

#endif // CALCULATOR_H#pragma once
