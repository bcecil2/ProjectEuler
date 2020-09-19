#include <iostream>

using namespace std;

bool isPrime(long long int n){
     if (n <= 1){
        return false;
     }
     else if (n <= 3){
        return true;
     }

     else if(n % 2 == 0 || n % 3 == 0)
        return false;
     long long int i{5};
     while(i * i <= n){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        i = i + 6;
     }
     return true;
 }

long long int triangleNumber(long long int n){

    return (n*(n+1)) / 2;
}

long long int getFactors(long long int num){
    long long int numOfFactors{2};
    for(long long int i{1}; i < num/2; i++){
        if(num % i == 0){
            numOfFactors += 1;
        }
    }
    return numOfFactors;
}
int main()
{

    long long int mostFactorsFound{1};
    long long int highlyDivisibleNum{0};
    long long int i{12000};

    //cout << triangleNumber(12000) << endl;
    //cout << getFactors(76576500) << endl;

    while(mostFactorsFound < 500){
        {
            //cout << triangleNumber(i) << endl;
            if(getFactors(triangleNumber(i)) > mostFactorsFound){
                mostFactorsFound = getFactors(triangleNumber(i));
                highlyDivisibleNum = triangleNumber(i);
                cout << mostFactorsFound << endl;
            }
        }
        i++;
    }
    cout << highlyDivisibleNum << " has: " << mostFactorsFound << " factors.";

    return 0;
}
