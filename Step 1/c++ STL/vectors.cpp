#include<bits/stdc++.h>
using namespace std;

int main(){
    
    /*
    ? VECTORS ?
    - it is a container which is dynamic in nature
    - means it has no fixed size like array
    - values aare stored contigously
    */

//! Declaration

    vector<int> v; // create empty container

    // Add 1 to v
    v.push_back(1);

    // Add 2 to v (This function is faster than push_back)
    v.emplace_back(2);

    // Vector of pair
    vector<pair<int,int>> v2;

    v2.push_back({1,2});    // We have to specify that it is a pair using {}
    v2.emplace_back(3,4);   // Automatically detects it is a pair

    // Declaring with size

    vector<int> v3(5,100);      // Vector of size 5 with all values as 100
    vector<int> v4(5);          // Vector of size 5 with any random/garbage values, but it can still increase it's size

    // Copying one vector to another
    vector<int> v5(v4);     // v5 is a copy pof v4

//! Accesing Elements

    vector<int> vec(5);

    // Similar to arrays
    for (int i=0; i < 5; i++){
        vec[i] = i;
        cout << vec[i] << " ";
    }
    cout << endl;

    //* Iterators - They are similar to pointers
    // vec.begin() -> gives the memory address
    // (*(vec)) -> gives the value stored at the address vec.begin()

    vector<int>::iterator itr = vec.begin();  //Stores address of first element of vec 

    itr++; // ++ and -- works in iterators

    cout << *(itr) << endl;
    
    itr += 2;
    cout << *(itr) << endl;

    return 0;
}