/*
          https://www.hackerrank.com/challenges/marcs-cakewalk
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,sum = 0;
    cin >> n;
    vector<int> calories(n);
    for(long long int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    sort(calories.rbegin(),calories.rend());
    for(long long int i = 0 ; i < n ; i++)
        {
        sum = sum + (calories[i] * pow(2,i));
     // cout<<pow(
      //cout<<calories[i]<<endl;
    }
    cout<<sum<<endl;
    
    return 0;
}

