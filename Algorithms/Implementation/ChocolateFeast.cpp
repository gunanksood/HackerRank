/*
     https://www.hackerrank.com/challenges/chocolate-feast  
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){
      long long int n,c,m;
      
        cin >> n >> c >> m;
        long int count = 0, wrap;
       
        count = n/c;
        wrap = count;
        while(wrap >= m)
            {
            count = count + wrap / m;
           int rem = wrap % m;
            wrap = (wrap / m) + rem;
            
        }
      cout<<count<<endl;  
    }
    return 0;
}

