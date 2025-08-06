/*
for string, c++ considers anything before " " as
first string when giving input

to get the whole line, use getline
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    // Ineteger types
    int x;
    
    long x2 = 134;

    long long x3;

    // float and double
    float y1 = 378.344;
    float y2 = 5;

    double z;

    // String and getline
    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << s1 << s2;

    // Using getline(cin, string variable)
    string s;
    getline(cin,s);
    cout << s;

    // Character
    char chr;
    char chr2 = 'g'; //Use '' for characters
    cin >> chr;
    cout << chr;

    return 0;
}