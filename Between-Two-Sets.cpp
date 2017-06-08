/*
       https://www.hackerrank.com/challenges/between-two-sets
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int m,min,max;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
        min=a[0];
        if(a[a_i]<min)
            {
            min=a[a_i];
        }
    }
    
    vector<int> b(m);
    max=b[0];
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
        if(b[b_i]>max)
            {
            max=b[b_i];
        }
    }
  
// cout<<min;
  //  cout<<max;
    int f1=0,f2=0,count=0;
    for(int i=min;i<=max;i++)
        {
        f1=0,f2=0;
        for(int j=0;j<n;j++)
            {
            if(i%a[j]!=0)
                {
                f1=1;
                break;
            }
        }
        for(int k=0;k<m;k++)
            {
            if(b[k]%i!=0)
                {
                f2=1;
            }
        }
        if(f1==0 && f2==0)
            {
            count++;
        }
    }
    cout<<count<<endl;
  
    return 0;
}

