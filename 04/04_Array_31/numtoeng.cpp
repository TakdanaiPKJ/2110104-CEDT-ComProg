#include "bits/stdc++.h"
using namespace std;

vector<pair<long long, string>> nums ={{1000000000000,"trillion"},{1000000000, "billion"}, {1000000, "million"}, 
    {1000, "thousand"}, {100, "hundred"}, {90, "ninety"}, {80, "eighty"}, {70, "seventy"},
    {60, "sixty"}, {50, "fifty"}, {40, "forty"}, {30, "thirty"}, {20, "twenty"}, {19, "nineteen"}, 
    {18, "eighteen"}, {17, "seventeen"}, {16, "sixteen"}, {15, "fifteen"}, {14, "fourteen"}, 
    {13, "thirteen"}, {12, "twelve"}, {11, "eleven"}, {10, "ten"}, {9, "nine"}, {8, "eight"}, 
    {7, "seven"}, {6, "six"}, {5, "five"}, {4, "four"}, {3, "three"}, {2, "two"}, {1, "one"}};

string solve(long long a){
    if (a==0) return "zero";
    for(auto x:nums){
        if(a>=x.first){
            return (a>=100 ? solve(a/x.first) : "") + x.second+ " " + (a%x.first==0 ? "" : solve(a%x.first)) ;
        }
    }
    return "";
}

int main(){

    long long n;
    cin >> n;
    cout << solve(n);

    return 0;
}
