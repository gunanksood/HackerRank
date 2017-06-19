/*
     https://www.hackerrank.com/challenges/migratory-birds
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    vector<int> types(n);
    vector<int> hash(6,0);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
        hash[types[types_i]]++;
    }
    int max = hash[1];
    int in = 1;
    for(int i = 1;i < 6 ; i++)
        {
        if(hash[i] > max)
            {
            in = i;
            max = hash[i];
        }
    }
    // your code goes here
    cout<<in<<endl;
    return 0;
}

