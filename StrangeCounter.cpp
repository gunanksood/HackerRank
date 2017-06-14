/*
   https://www.hackerrank.com/challenges/strange-code
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
   long long int t;
    cin >> t;
    long long int i=3,j,h=3;
    while(t>i)
        {
//    cout<<"h "<<h;
  //      cout<<"i "<<i;
        h=h*2;
        i=i+h;
  //      cout<<"h "<<h;
    //    cout<<"i "<<i;
    }
    cout<<(i-t+1);
    return 0;
}
