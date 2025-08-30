/*
? PQ is called as priority queue 
AKA Max heap
Stores elements in largest to samllest order (Descending value)
strings and characters are stored lexicographhly (Descending ASCII)
( b will come at top of a)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> pq;

    //? push and pop - O(log(n))
    //? top - O(1)

    pq.push(5); //{5}
    pq.push(3); //{5,3}
    pq.push(10); //{10,5,3}
    pq.emplace(12); //{12,10,5,3}

    cout << pq.top(); // prints largest value 12

    pq.pop();  // Removes largest element
    // {10,5,3}

    // size, swap, empty same as others

    // Minimum heap ( Stores minimum element at top)
    // AKA min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    
    pq_min.push(7); //{7}
    pq_min.push(3); //{3,7}
    pq_min.push(8); //{3,7,8}
    pq_min.emplace(19); //{3,7,8,19}

    cout << pq_min.top(); // Prints 3

    return 0;
}