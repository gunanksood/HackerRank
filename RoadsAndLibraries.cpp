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


long long int dfs(vector<vector<long long int> >&adj,vector < int>&marked,long long int s)
    {
    long long int count = 0;
    marked[s] = 1;
    count++;
    for(long long int i : adj[s])
        {
        if(!marked[i])
            {
     count = count +dfs(adj, marked, i);
        }
    }
    return count;
}


long long int function(vector<vector <long long int> >&adj ,long long int n,long long int lib, long long int road)
    {
    long long int count = 0;
    vector<int>marked(n,0);
    for(long long int i = 0 ; i < n ; i++)
        {
        if(!marked[i])
            {
            long long int c = 0;
           c = dfs(adj, marked, i);
            c--;
            count = count + lib + (c * road);
        }
    }
   return count; 
}




void add_edge(vector<vector<long long int> >&adj,long long int u,long long int v )
    {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
 long long int q;
    cin >> q;
    for(long long int i = 0 ; i < q ; i++)
        {
        long long int n, e, lib, road;
        cin >> n>>e>>lib>> road;
        vector<vector<long long int> >adj(n);
        for(long long int j = 0 ; j < e ; j++)
            {
            long long int v1 ,v2;
            cin >> v1 >> v2;
            v1--;
            v2--;
            //    cout<<"hello"<<endl;
            add_edge(adj,v1,v2);
        }
   /*     for(int k = 0 ; k < adj.size() ; k++)
            {
            for(int l = 0 ; l < adj[k].size() ; l++)  //  printing the adjacency list
                {
                cout<<adj[k][l]<<" ";
            }
            cout<<endl;
        }
        */
        if(lib < road)
            {
            cout<<n*lib<<endl;
        }
        else
            {
           long long int result =  function(adj,n,lib,road);
            cout<<result<<endl;
        }
        
    }
    return 0;
}

