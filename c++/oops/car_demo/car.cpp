#include <iostream>
#include <string>

using std::string;

/*
 * Create a class called Car with make, model, and year attributes.
 * Add a method called description that prints "{year} {make} {model}".
 */
class Car
{
private:
    int year;
    string make;
    string model;

public:
    Car(int year, string make, string model);

    void description();
};

int main()
{
    Car *car = new Car(1994, "Porsche", "911, 964 generation");
    car->description();
    return 0;
}

Car::Car(int year, string make, string model)
{
    this->year = year;
    this->make = make;
    this->model = model;
}

void Car::description()
{
    std::cout << "Car: " << " " << this->year << " " << this->make << " " << this->model << std::endl;
}
