#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std; // }}}
 

long long int dfs(vector<vector<long long int > >&g, vector<int >&marked, long long int n, long long int s)
    {
    long long int count = 0;
    marked[s] = 1;
    count++;
    for(long long int i  : g[s])
        {
        if(!marked[i])
       count +=  dfs(g,marked,n,i);
    }
    return count;
}




vector<long long int> driver(vector<vector<long long int > >&g, long long int n)
    {
     vector <int>marked(n, 0);
    vector<long long int >count;
    for(long long int i = 0 ; i < n ; i++)
        {
        if(!marked[i])
            {
            long long int c = dfs(g,marked, n, i);
            count.push_back(c);
        }
    }
    return count;
}



int main()
{ 
    long long int N, I;
    cin >> N >> I;
    vector<vector<long long int> > p(N);
    for (long long int i = 0; i < I; ++i) {
        long long int a, b;
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
   vector<long long int > v;
    v = driver(p, N);

   long long int  sum = 0;
long long int result = 0;
for(long long int size : v )
 {
   result += sum*size;
   sum += size;    
 }   
cout<< result<<endl;
    
    return 0;
}

