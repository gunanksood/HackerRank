/*
   https://www.hackerrank.com/challenges/breaking-best-and-worst-records
*/


#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int count1 = 0, count2 = 0;
    int min = s[0] , max = s[0];
    for(int i = 1 ; i < s.size(); i++)
        {
        if(s[i] > max)
            {
            max = s[i];
            count1++;
        }
        if(s[i] < min)
            {
            min = s[i];
            count2++;
        }
    }
    vector<int>a;
    a.push_back(count1);
    a.push_back(count2);
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
