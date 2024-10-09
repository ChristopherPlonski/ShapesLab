#include "Rectangle.hpp"
#ifndef SQUARE_H
#define SQUARE_H

class Square : public Rectangle
{
    public:
    explicit Square(double size):Rectangle(size,size){}
};

#endif // !SQUARE_H