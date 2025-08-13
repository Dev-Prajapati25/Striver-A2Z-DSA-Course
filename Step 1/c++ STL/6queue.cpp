#include<bits/stdc++.h>
using namespace std;

int main(){
    //? Queue
    // Same as stack but it has FIFO Structure
    // First in First out
    // all operation happen in O(1)

    queue<int> q;

    //! Adding
    q.push(3); //{3}
    q.push(4); //{3,4}
    q.emplace(5); // {3,4,5}

    //! Accesing 

    cout << q.back(); // 5

    cout << q.front(); // 3

    q.pop(); // removes the first element (here 3)
    // {4,5}

    cout << q.front();

    // size swap empty same as stack

    return 0;
}