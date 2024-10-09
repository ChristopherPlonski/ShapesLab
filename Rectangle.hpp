#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.hpp"

class Rectangle : public Shape
{
    public:
    explicit Rectangle(double length, double width);
    double getArea() override;
    double getPerimeter() override;
    private:
    double length;
    double width;

};

#endif // !RECTANGLE_H