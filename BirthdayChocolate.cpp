/*
     https://www.hackerrank.com/challenges/the-birthday-bar
*/

#include <bits/stdc++.h>

using namespace std;

int getWays(vector < int > squares, int d, int m){
    // Complete this function
    int count = 0;
    for(int i = 0 ; i <= squares.size()-m; i++)
        {
      //  cout<<i<<" "<<accumulate(squares.begin() + i,squares.begin() + i + m,0 )<<endl;
        if(accumulate(squares.begin() + i,squares.begin() + i + m,0 ) == d)
            {
            
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}
