#include "ShapeHelper.hpp"
#include <iostream>
#include <string>

using namespace std;

string ShapeHelper::printAreaToScreen(Shape* shape)
{
	double shapeArea = shape->getArea();
	string stringToPrint = "Shape's Area: " + to_string(shapeArea);
	//cout << stringToPrint;
	return stringToPrint;
}
