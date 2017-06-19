/*
        https://www.hackerrank.com/challenges/candies
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 long long int function(vector <int> v)
    {
   int n=v.size();
    long long int h=0,i;
     vector <int> left(n,1);
     vector <int> right(n,1);
     for(int i=n-2;i>=0;i--)
         {
         if(v[i]>v[i+1])
             {
             right[i]=1+right[i+1];
         }
     }
     for(i=1;i<n;i++)
         {
         if(v[i]>v[i-1])
             {
             left[i]=1+left[i-1];
         }
     }
     for(i=0;i<n;i++)
         {
         h=h+max(right[i],left[i]);
     }
    return h;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v1;
    long long int n,s,u;
    int t,i;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>t;
        v1.push_back(t);
    }
    s=function(v1);
    cout<<s<<endl;
    return 0;
}

