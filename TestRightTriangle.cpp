#include <iostream>
#include <cassert>

#include "RightTriangle.hpp"

using namespace std;

int main() {
	cout << "Testing right triangle \n";

	RightTriangle testRightTriangle = RightTriangle(3, 4, 5);
	assert(testRightTriangle.getArea() == 6.0);
	assert(testRightTriangle.getPerimeter() == 12.0);

	testRightTriangle = RightTriangle(7.5, 4, 8.5);
	assert(testRightTriangle.getArea() == 15.0);
	assert(testRightTriangle.getPerimeter() == 20.0);

	testRightTriangle = RightTriangle(0, 0, 0);
	assert(testRightTriangle.getArea() == 0);
	assert(testRightTriangle.getPerimeter() == 0);

	cout << "Right Triangle testing completed. \n";
}