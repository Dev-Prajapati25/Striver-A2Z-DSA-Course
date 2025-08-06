#include<bits/stdc++.h>
using namespace std;

/*
WHEN TO USE
to store multiple variables of same data type
*/

int main(){
    /*  Arrays  */
    int arr[4];

    // Accesing elements
    cin >> arr[0] >> arr[1];
    cout << arr[0] << arr[1];

    // Getting size of an array
    int sz = size(arr);  // Returns 4
    cout << sz;

    // 1D Array
    int arr1D[6]; // 6 Columns and 1 row

    // 2D Array
    int arr2D[3][4]; // 3 Rows and 4 Columns


    /*  String  */
    string a = "Data structures";

    // Indexing
    cout << a[3] << endl;

    // Finding length
    int len = a.size();
    int l = a.length();
    cout << len << endl << l;
    return 0;
}