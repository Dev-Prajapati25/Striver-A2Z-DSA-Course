#include<bits/stdc++.h>
using namespace std;

//! Lecture 2

void printName(int i, int n){
    if (i >= n){
        return;
    }
    cout << "Dev" << endl;
    printName(i + 1, n);
}

void print1toN_linearly(int i, int n){
    if (i > n){
        return;
    }
    cout << i << endl;
    print1toN_linearly(i+1, n);
}

void printNto1_linearly(int i, int n){
    if (i < 1) return;
    cout << i << endl;
    printNto1_linearly(i - 1, n);
}

void print1toN_backtracking(int i, int n){
    if (i < 1) return;
    print1toN_backtracking(i-1, n);
    cout << i << endl;
}

void printNto1_backtracking(int i, int n){
    if (i > n) return;
    printNto1_backtracking(i + 1, n);
    cout << i << endl;
}

//! Lecture 3

//Parameterised
void sum_of_n_param(int i, int sum){
    if (i < 1){
        cout << sum << endl;
        return;
    }
    sum_of_n_param(i - 1, sum + i);
}

// Functional
int sum_of_n_func(int i){
    if (i == 0){
        return 0;
    }
    return i + sum_of_n_func(i-1);
}

//Factorial in Parametirised
void fact_param(int i, int fact){
    if (i < 1){
        cout << fact;
        return;
    }
    fact_param(i - 1, fact*i);
}

//Factorial in Functional
int fact_func(long long i){
    if (i==1){
        return 1; 
    }
    return i * fact_func(i-1);
}

//! Lecture 4
void reverse_array(int i, int arr[], int n){
    if ( i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse_array(i+1, arr, n);
}



bool checkPalindrome(int i, string s){
    if (i >= s.length()/2) return true;

    if (s[i] != s[s.length() - i - 1]) return false;

    return checkPalindrome(i + 1, s);
}

int fibonacciNum(int n){
    if (n <= 1){
        return n;
    }
    return fibonacciNum(n-1) + fibonacciNum(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacciNum(n) << endl;
    return 0;
}