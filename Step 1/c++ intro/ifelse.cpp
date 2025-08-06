#include<bits/stdc++.h>
using namespace std;


/*
write program to input age
and print whether adult or not
*/

int main(){
    int age;
    cin >> age;

    if (age < 18){
        cout << "Not an Adult";
    }
    else if (age > 18){
        cout << "Adult";
    }
    else{
        cout << "Dont know";
    }

    return 0;
}