#include <iostream>
#include <cassert>

#include "IsocelesRightTriangle.hpp"

using namespace std;

int main() {
	cout << "Testing IsocelesRightTriangle \n";

	IsocelesRightTriangle testIsocelesRightTriangle = IsocelesRightTriangle(3, 5);
	assert(testIsocelesRightTriangle.getArea() == 4.5);
	assert(testIsocelesRightTriangle.getPerimeter() == 11);

	testIsocelesRightTriangle = IsocelesRightTriangle(1.2, 1.69706);
	assert(testIsocelesRightTriangle.getArea() == 0.72);
	assert(testIsocelesRightTriangle.getPerimeter() == 4.09706);

	testIsocelesRightTriangle = IsocelesRightTriangle(0, 0);
	assert(testIsocelesRightTriangle.getArea() == 0);
	assert(testIsocelesRightTriangle.getPerimeter() == 0);

	cout << "IsocelesRightTriangle testing completed. \n";
}