#pragma once
#define Fraction_H

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction();
	~Fraction();
	Fraction(int num, int den);
	int Add(int num1, int num2);
	int subtract(int num1, int num2);
	int divide(int num1, int num2);
	int multiply(int num1, int num2);
	void print(int num1, int num2);
};


