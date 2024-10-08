#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Shape.hpp"


class RightTriangle : public Shape {

public:
	explicit RightTriangle(double leg1Length, double leg2Length, double hypotenusLength);
	double getArea() override;
	double getPerimeter() override;

private:
	double hypotenusLength;
	double leg1Length;
	double leg2Length;

};

#endif // !RIGHTTRIANGLE_H