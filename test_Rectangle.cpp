#include "Rectangle.hpp"
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    Rectangle *rectangle = new Rectangle(3.0, 2.0);

    assert(rectangle->getArea() == 6.0);
    assert(rectangle->getPerimeter() == 10.0);

    rectangle = new Rectangle(100.0, 100.0);

    assert(rectangle->getArea() == 10000.0);
    assert(rectangle->getPerimeter() == 400.0);

    rectangle = new Rectangle(0.0, 0.0);

    assert(rectangle->getArea() == 0.0);
    assert(rectangle->getPerimeter() == 0.0);

    cout << "Code Works" << endl;

    return 0;
}