#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//2783915460

int main()
{
  int myints[] = {0,1,2,3,4,5,6,7,8,9};

  std::sort (myints,myints+10);


  int permutation{1};
  while ( permutation < 1000000 ){
     std::next_permutation(myints,myints+10);
     permutation += 1;
  }


  std::cout << "After loop: " << myints[0] << myints[1] << myints[2] << myints[3] << myints[4] << myints[5] << myints[6] << myints[7] << myints[8] << myints[9] << '\n';

  return 0;
}
