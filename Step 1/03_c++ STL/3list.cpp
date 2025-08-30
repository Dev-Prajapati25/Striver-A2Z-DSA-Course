#include<bits/stdc++.h>
using namespace std;

int main(){
    //? List - Same as vectors, just new 'front' functions
    // - Dynamic in nature

    list<int> lst;

    lst.push_back(2); // {2}
    lst.emplace_back(4); // {2,4}

    // push_front is better in terms of time complexity than vector.insert()
    lst.push_front(6); // {6,2,4}
    lst.emplace_front(8); // {8,6,2,4}

    // Other functions are same
    // begin, end, clear, insert, size, swap ...
    return 0;
}