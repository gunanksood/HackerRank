/*
     https://www.hackerrank.com/challenges/apple-and-orange
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
   long long  int s;
     long long int t;
    cin >> s >> t;
    long long int a;
    long long int b;
    cin >> a >> b;
    long long int m;
    long long int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    int count1=0,count2=0;
    for(int i=0;i<m;i++)
        {
        if(apple[i]+a>=s && apple[i]+a<=t)
            {
            count1++;
        }
        
    }
    for(int i=0;i<n;i++)
        {
        if(orange[i]+b>=s && orange[i]+b<=t)
            {
            count2++;
        }
        
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    return 0;
}


