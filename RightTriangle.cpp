#include "RightTriangle.hpp"

RightTriangle::RightTriangle(double leg1Length, double leg2Length, double hypotenusLength)
{
	this->leg1Length = leg1Length;
	this->leg2Length = leg2Length;
	this->hypotenusLength = hypotenusLength;
}

double RightTriangle::getArea()
{
	return 0.5 * leg1Length * leg2Length;
}

double RightTriangle::getPerimeter()
{
	return leg1Length + leg2Length + hypotenusLength;
}
