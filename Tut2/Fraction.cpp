#include "stdafx.h"
#include "Fraction.h"


Fraction::Fraction(int num1 , int num2)
{
	numerator = num1;
	denominator = num2;
}


Fraction::~Fraction()
{
}

int Fraction::Add(int num1, int num2)
{
	return num1 + num2;
}

int Fraction::subtract(int num1, int num2)
{
	return num2 - num1;
}

int Fraction::multiply(int num1, int num2)
{
	return (num1*num2);
}

int Fraction::divide(int num1, int num2)
{
	return (num1 / num2);
}





