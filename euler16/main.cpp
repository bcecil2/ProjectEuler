#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double boi{0};

    boi = pow(2,1000);

    //cout << boi << endl;

    string nug{to_string(boi)};
    //cout << nug.size();
    unsigned long long int sum{0};
    for(unsigned long long int i{0}; i < nug.size() - 7; i++){
        sum += (nug[i]) - 48;
    }
    cout << sum << endl;
}
