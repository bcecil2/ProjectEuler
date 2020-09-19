#include <iostream>
#include <vector>

using namespace std;

bool isAbundant(int num){
    int sumOfFactors{0};
    for(int i{1}; i <= (num/2); i++){
        if(num % i == 0){
          sumOfFactors += i;
        }

    }
    if(sumOfFactors > num){
        return true;
    }
    else{
        return false;
    }
}

bool isSum(int num, const vector<int>& vec){
    bool isSum{false};
    for(int k{0}; k < vec.size(); k++){
        for(int j{0}; j < vec.size(); j++){
                if(vec[k] + vec[j] > 28123){
                    break;
                }
                else if(vec[k] + vec[j] == num){
                    isSum = true;
                    break;
                }
        }
    }
    return isSum;
}

int main()
{
    vector<int> abundantNums{};
    for(int i{1}; i < 28123; i++){
        if(isAbundant(i)){
            abundantNums.push_back(i);
        }
    }

    //cout << abundantNums.size() << endl;

    int sum{0};

    for(int i{0}; i <= 28123; i++){
            if(isSum(i, abundantNums) == false){
                sum += i;
                cout << sum << endl;
            }
    }
    cout << sum << endl;

}
