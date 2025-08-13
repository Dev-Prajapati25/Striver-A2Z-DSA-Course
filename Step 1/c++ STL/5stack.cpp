#include<bits/stdc++.h>
using namespace std;

int main(){
    //? Stacks
    // LIFO structure
    //* In stacks all operations discussed below take O(1) 

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    //!NOTE - indexing in stack is not allowed - X st[2] X

    cout << st.top(); // Prints 5

    st.pop();
    cout << st.top(); // Prints 4

    cout << st.size(); //4
    
    cout << st.empty(); // False
    
    stack<int>st1,st2;

    st1.swap(st2);
    
    return 0;
}