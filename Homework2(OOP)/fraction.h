#pragma once
#ifndef _fraction_h_
#define _fraction_h_
#include <iostream>

class fraction
{
public: 
	fraction(int numerator, int denominator);

	void composition(int numerator, int denominator);

	int getCompositionResult() const;

	void subtraction(int numerator, int denominator);

	int getSubtractionResult() const;

	void multiplication(int numerator, int denominator);

	int getMultiplicationResult() const;

	void division(int numerator, int denominator);

	int getDivisionResult() const;

private:
	int _numerator;
	int _denominator;
};

#endif




