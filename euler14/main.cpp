#include <iostream>

using namespace std;

long long int collatz(long long int someNum) {
   long long int counter{1};

    while(someNum != 1){
      if(someNum % 2 == 0){
        someNum = someNum / 2;
      } else if (someNum % 2 != 0 ){
                someNum = someNum * 3 + 1;
      }
       ++counter;
    }
    return counter;

}

int main()
{
    long long int biggestChain{0};
    int chainProducer{0};
    for(long long int i{1}; i < 5000000; i++){
       if(collatz(i) > biggestChain){
          biggestChain = collatz(i);
          chainProducer = i;
       }
    }
    cout << chainProducer << " produced a chain of " << biggestChain << " numbers";
    //cout << endl;

    return 0;
}
