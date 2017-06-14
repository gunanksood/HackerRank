/*
               https://www.hackerrank.com/challenges/happy-ladybugs
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
    long long int Q;
    cin >> Q;
    for(long long int a0 = 0; a0 < Q; a0++){
        long long int n;
        cin >> n;
        string b;
        cin >> b;
        vector<int>v(26,0);
     //   cout <<n<<"  ";
        int uncount = 0,count = 0, flag = 0;
        for(long long int i = 0 ; i < n ; i++)
            {
       if(b[i] == '_')
           {
           uncount++;
       }
            else
                {
                v[b[i] - 'A']++;
            }
        }
        if(uncount == n)
            {
            cout<<"YES"<<endl;
            continue;
        }
        if(n == 1)
            {
            cout<<"NO"<<endl;
            continue;
        }
        else if(uncount == 0)
            {
            
       //     cout<<"here";
            int f = 0, cnt = 2;
            for(long long int i = 1 ; i < n ; i++)
                {
                if(b[i] == b[i-1])
                    {
                    cnt = 2;
                }
                else
                    {
                    if(i == n-1)
                        {
                        f = 1;
                    }
                    if(cnt == 0)
                        {
                        f = 1;
                        
                    }
                   cnt = 0;
                }
            }
            if(f == 0)
                {
                cout<<"YES"<<endl;
                continue;
            }
            else if(f == 1)
                {
                cout<<"NO"<<endl;
            }
        }
        else
            {
            int i = 0;
            for( i = 0 ; i < 26 ; i++)
                {
                
          //      cout<<v[i]<<" ";
                
                if(v[i]  == 1)
                    {
                    cout<<"NO"<<endl;
                    break;
                }
               
            }
            if(i == 26)
                {
                cout<<"YES"<<endl;
                continue;
            }
                
        }
        
    }
    return 0;
}

