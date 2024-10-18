#include <iostream>
// for measuring the time
#include <chrono>

int main()
{
    // locking namespace to local scope
    using std::cout;
    using std::endl;

    using std::chrono::duration_cast;
    using std::chrono::high_resolution_clock;
    using std::chrono::milliseconds;
    using std::chrono::nanoseconds;

    auto t1 = high_resolution_clock::now();
    const int MAX_COUNT = 1000000000;
    int value = 0;
    for (int i = 0; i < MAX_COUNT; i++)
    {
        value++;
    }
    auto t2 = high_resolution_clock::now();

    nanoseconds time_taken_ns = t2 - t1;
    milliseconds time_taken_ms = duration_cast<milliseconds>(time_taken_ns);

    cout << endl << "Counted till " << value << " in " << time_taken_ms.count() << "ms." << endl;
    return 0;
}