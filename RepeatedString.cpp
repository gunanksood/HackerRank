/*
      https://www.hackerrank.com/challenges/repeated-string
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
    string s;
    cin >> s;
    long long int n;
    cin >> n;
 long long   int l=s.length();

  long long int c=0,count=0;
    for(int i=0;i<l;i++)
        {
        if(s[i]=='a')
            {
            c++;
        }
    }

    count = c * (n / l);
 long long int m = n % l;
 //   cout<<m<<endl;
    for(int i = 0; i < m; i++)
        {
        if(s[i] == 'a')
            {
            count++;
        }
    }
    cout<< count<< endl;
    return 0;
}

