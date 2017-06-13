/*
        https://www.hackerrank.com/challenges/luck-balance
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int luck = 0,n,k,l,t;
    cin >> n;
    cin >> k;
    vector<int>v(n);
    for(long long int i = 0 ; i < n ; i++)
        {
        cin >> l;
        cin >>t;
        if(t == 0)
            {
            luck = luck + l;
        }
        if(t == 1)
            {
            v.push_back(l);
        }
    }
    sort(v.begin(),v.end());
    for(long long int i = 0 ; i < v.size(); i++)
        {
        if(i+1 <= (v.size() - k))
            {
            luck = luck -v[i];
        }
        else
            {
            luck = luck + v[i];
        }
    }
    cout<<luck<<endl;
    return 0;
}

