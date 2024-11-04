/*
 * WAP that outputs 5th element of a vector of strings
 */
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    auto names = new std::vector<std::string>();

    names->push_back("Paul");
    names->push_back("John");
    names->push_back("Marshal");
    names->push_back("James");
    names->push_back("Stephen");
    names->push_back("Steve");

    cout << "Vector: " << endl;
    for (auto name : *names)
    {
        cout << name << " ";
    }
    cout << endl;

    cout << "The 5th element: " << names->at(4) << endl;

    return 0;
}