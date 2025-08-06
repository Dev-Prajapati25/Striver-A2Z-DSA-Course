#include<bits/stdc++.h>
using namespace std;

/*
Not need to use '&' to pass arrays by
reference because arrays are already passed by reference
*/

// Pass by value
void multby2(int n){
    int res = n * 2;
    cout << res << endl;
}

// Pass by reference
void change_char(string &s){
    s[1] = 'Z';
    cout << s << endl;
}

int main(){
    int n1;
    cin >> n1;

    multby2(n1);
    cout << n1 << endl;

    string sr = "Dev";
    change_char(sr);
    cout << sr << endl;
    return 0;
}