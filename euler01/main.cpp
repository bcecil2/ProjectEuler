#include <iostream>
#include <string>

using namespace std;

int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

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


void euler01(){
    int sum{0};
    for(int i{0}; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
}

void euler02(){
    int sum{0};
    for(int i{0}; i < 34; i++){
        if(fib(i) % 2 == 0){
            sum += fib(i);
        }
    }
    cout << sum;

}


bool isPalin(int n){

    int match{0};
    bool isPalin{false};
    string numString{to_string(n)};
    int numLength{numString.size() - 1};
    for(int i{0}; i < numLength; i++){
        if(numString[i] == numString[numLength - i]){
            match += 1;
        }
    }
    if(match == numLength){
        isPalin = true;
    }
    //cout << numString.length() << endl;
    return isPalin;
}
void euler03()
{
    int largestFactor{0};
    for(int i{1}; i < 775146; i++){
        if(i % 2 != 0 && 600851475143 % i == 0){
           if(isPrime(i)){
                largestFactor = i;
           }
        }
    }
    cout << largestFactor << endl;
}

void euler04(){
    int largestPalin{0};
    int largeI{0};
    int largeJ{0};
    for(int i{100}; i < 999; i++){
        for(int j{100}; j < 999; j++){
            if(isPalin(i * j)){
                if((i * j) > largestPalin){
                    largestPalin = i * j;
                    largeI = i;
                    largeJ = j;
                }
            }
        }
    }
    cout << largestPalin << " " << largeI << " " << largeJ << endl;

}

void euler05(){
    bool notFound{true};
    int numToCheck{1};
    while(notFound == true){
        //cout << numToCheck << endl;
        int dividesInto{1};
        for(int i{1}; i < 20; i++){
            if(numToCheck % i == 0){
               dividesInto += 1;
            }
        }
        if(dividesInto == 20){
            notFound = false;
        }
        else {
            numToCheck += 1;
        }
    }
    cout << numToCheck << endl;
}

int sumOfSquares(int n){
    int sum{0};
    for(int i{0}; i < n + 1; i++){
        sum += i*i;
    }
    return sum;
}

int squareOfSums(int n){
    int sum{0};
    for(int i{0}; i < n + 1; i++){
        sum += i;
    }
    return sum * sum;
}
void euler06(){
    cout << squareOfSums(100) - sumOfSquares(100);
}

void euler07(){
    bool found{false};
    int numToCheck{0};
    int numOfPrimes{0};
    while(found == false){
        if(isPrime(numToCheck) == true){
           numOfPrimes += 1;
        }
        if(numOfPrimes == 148000){
            found = true;
        }else{
            numToCheck += 1;
        }
    }
    cout <<  numToCheck << endl;
}

int charToInt(char a){
    return a - '0';
}
void euler08(){
    string bigNum{"7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450"};

    int64_t biggestProduct{1};
    for(int i{0}; i < 987; i++){
        int64_t tmpProduct{1};
        for(int j{i}; j < i + 13; j++){
            tmpProduct *= charToInt(bigNum[j]);
             if(biggestProduct <= tmpProduct){
                biggestProduct = tmpProduct;
            }
        }

    }
    cout << biggestProduct << endl;

}


void euler09(){

    int one{0};
    int two{0};
    int three{0};
    int sum{1000};
    for(int a{0}; a < 500; a++){
        for(int b{0}; b < 500; b++){
            for(int c{0}; c < 500; c++){
              if(a + b + c == 1000 && a*a + b*b == c*c){
                    cout << "A: " << a << " " << "B: " << b << " " << "C: " << c << endl;
                }
            }
        }
    }

}
void euler10(){
    int64_t sum{0};
    for(int64_t i{2}; i < 2000000; i++){
        if(isPrime(i) == true){
            sum += i;
        }
    }
    cout << sum << endl;
}
int main()
{

    euler03();

    return 0;
}
