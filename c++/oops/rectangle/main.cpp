#include <iostream>

/*
 * Create a class called Rectangle that has width and height attributes.
 * Add methods to calculate the area and perimeter of the rectangle.
 */
class Rectangle
{
private:
    float width, height;

public:
    Rectangle(float w, float h);

    float calculateArea();
    float calculatePerimeter();
};

int main()
{
    using std::cout;
    using std::endl;
    Rectangle *r1 = new Rectangle(45, 3.1f);
    float area = r1->calculateArea();

    cout << "Rectangle area: " << area << endl;
    cout << "Rectangle perimeter: " << r1->calculatePerimeter() << endl;
    return 0;
}

Rectangle::Rectangle(float w, float h)
{
    width = w;
    height = h;
}

float Rectangle::calculateArea()
{
    return width * height;
}

float Rectangle::calculatePerimeter()
{
    return 0.5f * (width + height);
}
