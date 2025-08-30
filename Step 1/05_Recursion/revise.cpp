#include<bits/stdc++.h>
using namespace std;

// Print name n times
void printName(int i, int n){
    if (i > n){
        return;
    }
    cout << "Dev" << endl;
    printName(i+1, n);
    
}

// Print 1 to N linearly
void onetoNLinearly(int i, int n){
    if (i > n){
        return;
    }
    cout << i << endl;
    onetoNLinearly(i+1, n);
}

// Print N to 1 linearly
void Ntoonelinearly(int i, int n){
    if (i < 1){
        return;
    }
    cout << i << endl;
    Ntoonelinearly(i - 1, n);
}

// Print 1 to N using backtracking
void back_1toN(int i, int n){
    if (i == 0){
        return;
    }
    back_1toN(i-1, n);
    cout << i << endl;
}

// Print N to 1 using backtracking
void back_Nto1(int i, int n){
    if (i > n){
        return;
    }
    back_Nto1(i+1, n);
    cout << i << endl;
}

// Sum of  first n numbers
void parameterised_sum_of_n(int sum, int n){
    if (n < 1){
        cout << sum << endl;
        return;
    }
    parameterised_sum_of_n(sum + n, n-1);
}

int functional_sum_of_n(int n){
    if (n == 1){
        return 1;
    }
    return n + functional_sum_of_n(n-1);
}

void param_factorialN(int fact, int n){
    if (n == 1){
        cout << fact << endl;
        return;
    }
    param_factorialN(fact*n, n-1);
}

int functional_factorialN(int n){
    if (n == 1){
        return 1;
    }
    return n * functional_factorialN(n-1);
}

int main(){
    int n;
    cin >> n;
    // printName(1,n);
    // onetoNLinearly(1,n);
    // Ntoonelinearly(n,n);
    // back_1toN(n,n);
    // back_Nto1(1,n);
    // sum_of_n(0,n);
    // cout << functional_sum_of_n(n) << endl;
    // param_factorialN(1, n);
    // cout << functional_factorialN(n) << endl;
    return 0;
}