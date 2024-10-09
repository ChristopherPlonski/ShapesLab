#include "Square.hpp"
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    Square square = Square(5.00);

    assert(square.getArea() == 25.00);
    assert(square.getPerimeter() == 20.00);

    square = Square(3.00);

    assert(square.getArea() == 9.00);
    assert(square.getPerimeter() == 12.00);

    cout << "Code Works" << endl;


    return 0;
}