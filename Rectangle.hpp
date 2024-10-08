#include "Shape.hpp"
#ifndef RECTANGLE_H
#define RECTANGLE_H

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