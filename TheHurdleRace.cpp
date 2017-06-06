/*
        https://www.hackerrank.com/challenges/the-hurdle-race
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
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int max = height[0];
    for(int i = 0 ; i < n ; i++)
        {
        if(height[i] > max)
            {
            max = height[i];
        }
    }
    if(max > k)
        {
        cout<<max-k<<endl;
        
    }
    else
        {
        cout<<0<<endl;
    }
    // your code goes here
    return 0;
}

