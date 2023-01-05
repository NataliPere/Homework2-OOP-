#include "fraction.h"
#include <iostream>

fraction::fraction(int numerator, int denominator) : _numerator(numerator), _denominator(denominator) {}

	void fraction::composition(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int fraction::getCompositionResult() const {
		return _numerator + _denominator;
	}

	void fraction::subtraction(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int fraction::getSubtractionResult() const {
		return _numerator - _denominator;
	}

	void fraction::multiplication(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int fraction::getMultiplicationResult() const {
		return _numerator * _denominator;
	}

	void fraction::division(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int fraction::getDivisionResult() const {
		return _numerator / _denominator;
	}

