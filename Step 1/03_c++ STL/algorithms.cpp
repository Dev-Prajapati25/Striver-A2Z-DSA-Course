#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {5, 3, 9, 1};

    vector<int> v(2,33);

    sort(arr, arr+4);

    for (auto item : arr){
        cout << item << endl;
    }
    return 0;
}