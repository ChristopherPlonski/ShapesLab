#include <iostream>
#include <cassert>

#include "ShapeHelper.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include "IsocelesRightTriangle.hpp"

using namespace std;

int main() {
	cout << "Testing Shape Helper \n";

	Circle* testCircle = new Circle(10);
	string stringToPrint = ShapeHelper::printAreaToScreen(testCircle);
	assert(stringToPrint == "Shape's Area: 314.000000");

	IsocelesRightTriangle* testIsocelesRightTriangle = new IsocelesRightTriangle(7, 9.9);
	stringToPrint = ShapeHelper::printAreaToScreen(testIsocelesRightTriangle);
	assert(stringToPrint == "Shape's Area: 24.500000");

	Square* testSquare = new Square(0);
	stringToPrint = ShapeHelper::printAreaToScreen(testSquare);
	assert(stringToPrint == "Shape's Area: 0.000000");

	cout << "Shape Helper testing completed. \n";
}