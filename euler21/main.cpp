#include <iostream>
#include <vector>

using namespace std;

vector<int> getFactors(int numToFactor){
    vector<int> factors{};
    for(int i{1}; i <= (numToFactor / 2); i++){
        if(numToFactor % i == 0){
           factors.push_back(i);
        }
    }

    return factors;
}

int sumFactors(vector<int> vec){
    int sum{};
    for(int boi : vec){
        sum += boi;
    }
    return sum;
}

int main()
{
    vector<int> amicableBois{};
    for(int i{0}; i < 10000; i++){
        int checkThis{sumFactors(getFactors(i))};
        if(i == sumFactors(getFactors(checkThis)) && i != checkThis){
            //amicableBois.push_back(i);
            amicableBois.push_back(sumFactors(getFactors(checkThis)));
        }
    }

     int amicableSum{0};
    for(int guy : amicableBois){
        amicableSum += guy;
        cout << guy << " ";
    }

    cout << "sum: " << amicableSum << endl;


}
