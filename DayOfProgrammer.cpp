/*
      https://www.hackerrank.com/challenges/day-of-the-programmer
*/

#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    int mnths7 = 31 + 31 + 30 + 31 + 30 + 31 + 31;
    int feb;
    if(year < 1918)
        {
        feb = year%4 ? 28 : 29;
    }
    else if(year > 1918)
        {
        feb = !(year %400) || year % 100 && !(year %4) ? 29 : 28;
    }
    else
        {
        feb = 15;
    }
    int total = 256 - (feb + mnths7);
    return to_string(total)+".09."+to_string(year);
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

