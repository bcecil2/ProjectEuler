#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    vector<string> listOfNames{};

    ifstream in("p022_names.txt");
    in.open("p022_names.txt");
    std::string line{};
    while (in >> line)
    {
        listOfNames.push_back(line);
    }

    cout << listOfNames.size();
    return 0;
}
