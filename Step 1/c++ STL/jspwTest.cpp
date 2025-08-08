#include<bits/stdc++.h>
using namespace std;

//! Declaration
void declaration(){
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
}

//! Accesing Elements
void accesing_elements(){
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

    //
    vector<int>::iterator it = vec.end(); // Points to the location after the last element of vec
    

    cout << vec.back() << endl; // Gives last element of vector

    // Looping through vector using iterator

    vector<int> vector(2);
    vector[0] = 23;
    vector[1] = 64;

    // for (vector<int>::iterator it2 = vec.begin(); it2 != vec.end(); it++){        
    // }

    // auto - automatically assigns the datatype based on the value assigned
    // auto b = 5;  b will be of datatype int  
    // can be used to easily creaate an iterator

    for (auto itera = vector.begin(); itera != vector.end(); itera++){
        cout << *(itera) << " ";
    }
    cout << endl;

    for (auto item : vector){
        // If vector is {23, 64}
        // vaues of item will be 23 in 1st iteration, 64 in 2nd iteration
        // item is of datatype int
        cout << item << " ";
    }
}


//! Deletion on vectors
void deletion(){

    vector<int> vec;
    vec[0] = 32;
    vec[1] = 64;
    vec[2] = 90;
    vec[3] = 98;
    vec[4] = 108;
    vec[5] = 51;

    //* erase
    // Takes address of element to delete

    vec.erase(vec.begin() + 2);

    //deleting multiple elements {32,64,98,108,51}
    // To delete 64 and 98
    // [start,end] - start-> starting of element,
    // end -> address of element right after the last element to delete
    vec.erase(vec.begin()+1, vec.end() + 3);

    //*Insert
    vector<int> vec2(2,34); // {34,34}
    //single element
    vec2.insert(vec2.begin() + 1, 200); // {34, 200, 34}

    //multiple elements
    vec2.insert(vec2.begin() + 1, 2, 99); // {34, 99, 99, 200, 34}

    // inserting vector into vector
    vector<int> copy(2,55); // {55, 55}
    vec2.insert(vec2.begin(), copy.begin(), copy.end()); // {55, 55, 34, 99, 200, 34} 

    //*Some other functions
    cout << vec2.size(); 
}

int main(){
    
    /*
    ? VECTORS ?
    - it is a container which is dynamic in nature
    - means it has no fixed size like array
    - values aare stored contigously
    */
    deletion();
}
