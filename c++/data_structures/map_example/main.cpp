/*
 * WAP that creates a map with string keys and integer values, insert few key-value pairs, output the map
 */
#include <map>
#include <iostream>

int main()
{
    using std::map;
    using std::pair;
    using std::string;

    auto salaries = new map<string, int>();

    salaries->insert(pair<string, int>("John", 80000));
    salaries->insert(pair<string, int>("James", 86000));
    salaries->insert(pair<string, int>("Kuminga", 66000));
    salaries->insert(pair<string, int>("Stephen", 120000));
    salaries->insert(pair<string, int>("Klay", 100000));

    for (auto salary = salaries->begin(); salary != salaries->end(); salary++)
        std::cout << "Key: " << salary->first << "\tValue: " << salary->second << std::endl;

    return 0;
}