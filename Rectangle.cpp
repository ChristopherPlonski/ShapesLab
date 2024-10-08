#include "Rectangle.hpp"

Rectangle::Rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

double Rectangle::getArea()
{
    return length * width;
};

double Rectangle::getPerimeter()
{
    return length + length + width + width;
};
