#include "Shape.hpp"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {
public:
	explicit Circle(double radius);
	double getArea() override;
	double getPerimeter() override;
private:
	double radius;
};

#endif // !CIRCLE_H
