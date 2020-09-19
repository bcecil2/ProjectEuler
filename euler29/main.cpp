#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> nums{};
    vector<string>::iterator it;


   for(unsigned long long int i{2}; i <= 100; i++){
        for(unsigned long long int j{2}; j <= 100; j++){
            it = find(nums.begin(), nums.end(), to_string(pow(i,j)));
            if(it == nums.end()){
                nums.push_back(to_string(pow(i,j)));
                //cout << ) << endl;
            }

        }
   }

   //sort(nums.begin(), nums.end());
   for(string boi : nums){
        cout << boi << " ";
   }


   cout << nums.size();
}
