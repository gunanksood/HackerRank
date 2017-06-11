/*
      https://www.hackerrank.com/challenges/permutation-equation
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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n ;
    cin >> n;
    vector<int>a(n+1);
    for(long long int i= 1 ; i < n+1 ; i ++)
        {
        cin >> a[i]; 
    }
 vector<int>b(n+1);
    for(long long int i = 1; i <n+1; i++)
        {
       b[a[a[i]]] = i;
    }
    
    for(long long int i = 1; i < n+1; i++)
        {
       cout<<b[i]<<endl;
        
    }
        return 0;
}

