/*
    https://www.hackerrank.com/challenges/beautiful-days-at-the-movies
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int rev(int m)
    {
   long long int l = 0,n = 1;
    while(m > 0)
        {
     long long int r = m % 10;
        if(r == 0)
            {
           l = l * n + r;
        }
        else
            {
        l = l * n + r;
        }
       n = 10;
        m = m / 10;
 
    }
    return l;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int i, j, count = 0;
    long long int k;
    cin >> i >> j >> k;
    for(long long int l=i;l<=j;l++)
        {
       long long int p=rev(l);
        double q;
 double h = abs(l-p);
  
        q = h / k;
        
        if(q == floor(q))
            {
            count++;
        }
       
        
    }
    cout<<count<<endl;
    return 0;
}

