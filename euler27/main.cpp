#include <iostream>
#include <vector>

using namespace std;


 bool isPrime(unsigned int n){
     if (n <= 1){
        return false;
     }
     else if (n <= 3){
        return true;
     }

     else if(n % 2 == 0 || n % 3 == 0)
        return false;
     unsigned int i{5};
     while(i * i <= n){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        i = i + 6;
     }
     return true;
 }

 bool otherIsPrime(int n, vector<int>& boi){
    int i = 0;
    while (boi[i] <= n) {
        if (boi[i] == n) {
            return true;
        }
        i++;
    }
    return false;
 }

int main()
{
    int numOfPrimes{0};
    int a{0};
    int b{0};
    vector<int> primes{};


    for(int i{0}; i < 1000; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }

    //cout << primes.size() << endl;

    int check{0};

    for(int i{-1000}; i < 1000; i++){
            cout << i << endl;
        for(int k{-1000}; k <= 1000; k++){
            int j{0};
            while(isPrime(j*j+j*i+k)){
                //cout << "j " << j << " i " << i << " k " << k << " " << quadform(j,i,k) << endl;
                j++;
            }
            if(j > numOfPrimes){
                numOfPrimes = j;
                a = i;
                b = k;
                cout <<  "a " << a << " b " << b << " "<< numOfPrimes << endl;


            }
        }

    }

    cout <<  "a " << a << " b " << b << " "<< numOfPrimes << endl;

    return 0;
}
