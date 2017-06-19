/*
       https://www.hackerrank.com/challenges/grading
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
    cin >> n;
    vector<int> v;
        
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        v.push_back(grade);
        // your code goes here
    }
 
    for(long long int i = 0 ; i < n ; i++)
        {
        if(v[i] < 38)
            {
            continue;
        }
        else
            {
            if((v[i] + 1)%5 == 0 || (v[i]+ 2 )%5 == 0)
                {
                if((v[i]+1)%5 == 0)
                    {
                    v[i] = v[i] + 1;
                }
                else if((v[i] + 2)% 5 == 0)
                    {
                    v[i] = v[i] + 2;
                }
            }
        }
    }
       for(int i = 0 ; i <n ; i++)
        {
        cout<<v[i]<<endl;
    }
    return 0;
}
