#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{

    array<string, 2> extras{"and", "hundred"};
    array<string, 10> oneToTen{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    array<string, 9> elevenToNineteen{"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen", "eighteen", "nineteen"};
    array<string, 8> twentyToNinety{"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    long int sum{0};

    for(int j{0}; j < 4; j++)
    {
        if (j < 1)
        {
            for(int i{0}; i < 10; i++)
            {
                sum += oneToTen[i].size();
                cout << oneToTen[i] << endl;
            }
        }
        if(j == 1)
        {
            for(int k{0}; k < 9; k++)
            {
                sum += elevenToNineteen[k].size();
                cout << elevenToNineteen[k] << endl;
            }
        }
        if(j == 2)
        {
            for(int l{0}; l < 8; l++)
            {
                sum += twentyToNinety[l].size();
                cout << twentyToNinety[l] << endl;
                for(int m{0}; m < 9; m++)
                {
                    sum += oneToTen[m].size() + twentyToNinety[l].size();
                    cout << twentyToNinety[l] + oneToTen[m] << endl;

                }
            }
        }
        if(j > 2)
        {
            for(int p{0}; p < 9; p++)
            {
                sum += oneToTen[p].size() + extras[1].size();
                cout << oneToTen[p] + extras[1] << endl;
                for(int t{0}; t < 10; t++){
                    sum += oneToTen[p].size() + extras[1].size() + extras[0].size() + oneToTen[t].size();
                    cout << oneToTen[p] + extras[1] + extras[0] + oneToTen[t] << endl;
                }
                for(int q{0}; q < 9; q++){
                    sum += oneToTen[p].size() + extras[1].size() + extras[0].size() + elevenToNineteen[q].size();
                    cout << oneToTen[p] + extras[1] + extras[0] + elevenToNineteen[q] << endl;
                }
                for(int b{0}; b < 8; b++){
                    sum += oneToTen[p].size() + extras[1].size() + extras[0].size() + twentyToNinety[b].size();
                    cout << oneToTen[p] + extras[1] + extras[0] + twentyToNinety[b] << endl;
                    for(int w{0}; w < 9; w++){
                         sum += oneToTen[p].size() + extras[1].size() + extras[0].size() + twentyToNinety[b].size() + oneToTen[w].size();
                        cout << oneToTen[p] + extras[1] + extras[0] + twentyToNinety[b] + oneToTen[w]<< endl;
                    }
                }


            }


        }
    }

    cout << sum + 11;


}



