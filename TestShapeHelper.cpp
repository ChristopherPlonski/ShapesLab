#include <iostream>
#include <cassert>

#include "ShapeHelper.hpp"
#include "Circle.hpp"
#include "IsocelesRightTriangle.hpp"

using namespace std;

int main() {
	cout << "Testing Shape Helper \n";

	Circle* testCircle = new Circle(10);
	string stringToPrint = ShapeHelper::printAreaToScreen(testCircle);
	assert(stringToPrint == "Shape's Area: 314");


	cout << "Shape Helper testing completed. \n";
}