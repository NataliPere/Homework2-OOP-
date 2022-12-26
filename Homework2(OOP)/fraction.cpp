#include "fraction.h"

fraction::fraction(int numerator, int denominator) : _numerator(numerator), _denominator(denominator) {


	void composition(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int getCompositionResult(int numerator, int denominator) const {
		return _numerator + _denominator;
	}

	void subtraction(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int getSubtractionResult(int numerator, int denominator) const {
		return _numerator - _denominator;
	}

	void multiplication(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int getMultiplicationResult() const {
		return _numerator * _denominator;
	}

	void division(int numerator, int denominator) {
		this->_numerator = numerator;
		this->_denominator = denominator;
	}

	int getDivisionResult() const {
		return _numerator / _denominator;
	}

}