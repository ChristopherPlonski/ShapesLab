#include "Circle.hpp"

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getPerimeter()
{
	return 2 * 3.14 * radius;
}
