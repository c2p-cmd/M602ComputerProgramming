#include <iostream>
#include <string>

using std::string;

/*
 * Create a parent class called Shape with a method area that returns the area of the shape as 0.
 * Then create two child classes Rectangle and Triangle that inherit from Shape.
 * Override the area method in each child class to calculate and return the area of a rectangle and a triangle, respectively.
 */
class Shape
{
public:
    Shape()
    {
    }

    virtual float area()
    {
        return 0;
    }
};

class Rectangle : Shape
{
private:
    float width, height;

public:
    Rectangle(float w, float h)
    {
        width = w;
        height = h;
    }

    virtual float area() override
    {
        return width * height;
    }
};

class Triangle : Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    virtual float area() override
    {
        return base * height * 0.5f;
    }
};

int main()
{
    using std::cout;
    using std::endl;

    Shape s1;
    string is_zero = (s1.area() == 0) ? "true" : "false";
    cout << "Simple shape has area of 0: " << is_zero << endl;

    Rectangle r1(3, 4.2);
    cout << "Specific rectangle has an area: " << r1.area() << endl;

    Triangle t1(3, 4.2);
    cout << "Specific triangle has an area: " << t1.area() << endl;
    return 0;
}
