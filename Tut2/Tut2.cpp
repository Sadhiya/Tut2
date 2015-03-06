#include <iostream>
#include "stdafx.h"
#include "Fraction.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

Fraction::Fraction(int num1, int num2)
{
	numerator = num1;
	denominator = num2;
}

int main()
{
	Fraction frac1;
	Fraction frac2;
	

	cout << "Please enter numerator for fraction 1 : " ;
	cin >> frac1.numerator;
	
	cout << "Please enter the denominator for fraction 1 : ";
	cin >> frac1.denominator;

	cout << "Please enter the numerator for fraction 2:";
	cin >> frac2.numerator;

	cout << "Please enter the denominator for fraction 2: ";
	cin >> frac2.denominator;





	return 0;


};