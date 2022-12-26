#include <iostream>
#include "fraction.h"


int main() {
	fraction numbers;
	int x, y;
	std::cout << "\nEnter two numbers for composition: ";
	std::cin >> x >> y;
	numbers.composition(x, y);
	int composition = numbers.getCompositionResult();

	std::cout << "Enter two numbers for subtraction: ";
	std::cin >> x >> y;
	if (x < y)
		std::swap(x, y);
	numbers.subtraction(x, y);
	int subtraction = numbers.getSubtractionResult();

	std::cout << "Enter two numbers for multiplication: ";
	std::cin >> x >> y;
	if (x, y)
		numbers.multiplication(x, y);
	int multiplication = numbers.getMultiplicationResult();

	std::cout << "Enter two number for division: ";
	std::cin >> x >> y;
	if (x < y)
		std::swap(x, y);
	numbers.division(x, y);
	int division = numbers.getDivisionResult();

	std::cout << "\nComposition: " << composition << "\n";
	std::cout << "Subtraction: " << subtraction << "\n";
	std::cout << "Multiplication: " << multiplication << "\n";
	std::cout << "Division: " << division << "\n";

}

