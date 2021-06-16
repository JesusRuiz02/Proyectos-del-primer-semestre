//Practica 11.cpp
//compile with: cl\c\ EHsc Mathlibrary.cpp
//post-build command: lib Mathlibrary.ob

#include "Practica11.h"

namespace Mathlibrary {
	double Arithmetic::Add(double a, double b)
	{
		return a + b;
	}
	double Arithmetic::Substract(double a, double b)
	{
		return a - b;
	}
	double Arithmetic::Multiply(double a, double b)
	{
		return a * b;
	}
	double Arithmetic::divide(double a, double b)
	{
		return a / b;
	}

}