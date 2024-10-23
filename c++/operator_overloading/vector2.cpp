#include <iostream>

struct vector2
{
public:
    int x, y;

    vector2(int x, int y);

    vector2 add(const vector2 &other) const;

    vector2 operator+(const vector2 &other) const;

    friend std::ostream &operator<<(std::ostream &stream, const vector2 &v);
};

int main()
{
    using std::cout;
    using std::endl;

    const vector2 v1(9, 7);
    const vector2 v2(81, 4);

    cout << "Trying out operator overloading on custom class \"vector2\"" << endl;
    cout << "Vector2 1: " << v1 << endl;
    cout << "Vector2 2: " << v2 << endl;

    const vector2 v3 = v1 + v2;

    cout << "vector2 1 + vector2 2: " << v3 << endl;

    return 0;
}

vector2::vector2(int x, int y) : x(x), y(y) {}

vector2 vector2::add(const vector2 &other) const
{
    return vector2(this->x + other.x, this->y + other.y);
}

vector2 vector2::operator+(const vector2 &other) const
{
    return add(other);
}

std::ostream &operator<<(std::ostream &stream, const vector2 &v)
{
    stream << "x=" << v.x << ", y=" << v.y;
    return stream;
}