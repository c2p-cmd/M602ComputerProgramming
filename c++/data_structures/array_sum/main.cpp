/*
 * WAP that takes an array of integers as input returns the sum of all the numbers in the array.
 */
#include <iostream>

namespace array_methods
{
    void print(int *array, const int &n);
}

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    auto array = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int element;

        cout << "Enter element at " << i << ": ";
        cin >> element;

        array[i] = element;
        sum += element;
    }

    cout << "Input array" << endl;
    array_methods::print(array, n);
    cout << "Array sum: " << sum << endl;

    delete[] array;
    return 0;
}

void array_methods::print(int *array, const int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}