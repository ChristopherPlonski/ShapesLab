#include "Rectangle.cpp"
#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
    Rectangle *rectangle = new Rectangle(3.0, 2.0);

    assert(rectangle->getArea() == 6.0);
    assert(rectangle->getPerimeter() == 10.0);

    cout << "Code Works" << endl;

    return 0;
}