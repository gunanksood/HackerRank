/*
     https://www.hackerrank.com/challenges/camelcase
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
    int i = 0,count = 1;
    while(s[i]!='\0')
        {
        if(s[i] < 97)
            {
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}

