#include<bits/stdc++.h>
using namespace std;

int main(){
    
    /*
    Pairs
    - Stores pair of two elements
    - Both need not be of same type
    */

    pair<char, int> p = {'A', 9};

    // Accesing Elemnts
    cout << p.first << " " << p.second << endl;

    // pair inside pair
    pair<int, pair<char,int>> p2 = {7, p};
    cout << p2.first << " " << p2.second.first << endl;

    // Array of pairs
    pair<int,int> arr[] = { {1,2}, {3,4}, {5,6} };
    cout << arr[2].first;

    return 0;
}