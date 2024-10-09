#include <iostream>
#include <cassert>

#include "Circle.hpp"

using namespace std;

int main() {
	cout << "Testing circle \n";

	Circle testCircle = Circle(5);

	assert(testCircle.getArea() == 3.14 * 5 * 5);
	assert(testCircle.getPerimeter() == 2 * 3.14 * 5);

	testCircle = Circle(0);

	assert(testCircle.getArea() == 0);
	assert(testCircle.getPerimeter() == 0);

	testCircle = Circle(1.5);

	assert(testCircle.getArea() == 3.14 * 1.5 * 1.5);
	assert(testCircle.getPerimeter() == 2 * 3.14 * 1.5);

	cout << "Circle testing completed. \n";
}