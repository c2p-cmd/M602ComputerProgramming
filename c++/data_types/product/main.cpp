/*
 * WAP that takes 3 input values and print the product of them as well as the average
 */
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    auto product = a * b * c;
    cout << "Product of " << a << " " << b << " " << c << ": " << product << endl;

    auto sum = a + b + c;
    auto average = sum / 3;
    cout << "Average of " << a << " " << b << " " << c << ": " << average << endl;

    return 0;
}