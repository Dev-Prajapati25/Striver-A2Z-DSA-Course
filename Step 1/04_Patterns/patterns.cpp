#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern7(int n){
    // No of rows = n
    for (int i = 0; i < n; i++){

        // No of spaces = n - i + 1 if int i = 0
        for (int blank = 0; blank < n - i - 1; blank++){
            cout << " ";
        }

        // No of '*' = 2i + 1
        for (int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n){
    for (int i = 0; i < n; i++){
        // No of spaces = i
        for (int blank = 0; blank < i; blank++){
            cout << " ";
        }
        
        // No of '*' = 2n - (2i+1)
        for (int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    pattern2(n);
    pattern5(n-1);
}

void pattern10_striver(int n){
    for (int i = 1; i <= 2*n - 1; i++){
        int stars = i;

        if (stars > n) stars = 2*n - i;

        for (int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){
    int bit = 0;
    for (int i = 0; i < n; i++){
        if (i%2==0) bit = 1;
        for (int j = 0; j < i + 1; j++){
            cout << bit << " ";
            bit = !bit;
        }
        cout << endl;
    }
}

void pattern12(int n){
    for (int i = 0; i < n; i++){
        //Number
        for (int j = 0; j < i + 1; j++){
            cout << j+1;
        }

        // Space
        for (int blank = 0; blank < 2*n - (2*i + 2); blank++){
            cout << " ";
        }

        //Number
        for (int j = 0; j < i + 1; j++){
            cout << n - j;
        }

        cout << endl;
    }
}

void pattern13(int n){
    int num = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for (int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0; j < i + 1; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for (int i = 0; i < n; i++){
        char c = 'A';
        for (int j = 0; j < n - i; j++){
            cout << c;
            c++;
        }
        cout << endl;
    }
}

void pattern16(int n){
    char c = 'A';
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < i+1; j++){
            cout << c;
        }
        cout << endl;
        c++;
    }
}

void pattern17(int n){
    for (int i = 0; i < n; i++){

        char c = 'A';

        // Blank spaces
        for (int blank = 0; blank < n - (i+1); blank++){
            cout << " ";
        }

        // Character
        for (int j=0; j < 2*i +1; j++){
            int no_char = 2*i +1;
            int mid = (no_char/2) + 1;
            cout << c;
            if (j+1 < mid){
                c++;
            }
            else{
                c--;
            }
        }
        cout << endl;
    }
}

void pattern18(int n){
    for (int i = 0; i < n; i++){
        char c = 'E' - i;

        for (int j = 0; j < i+1; j++){
            cout << c;
            c++;
        }
        cout << endl;
    }
}

void pattern19(int n){

    // Upper half
    int upper_spaces = 0;
    for (int i = 0; i < n; i++){
        
        // Stars
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }

        // blank
        for (int blank = 0; blank < upper_spaces; blank++){
            cout << "  ";
        }

        // Stars
        for (int j = 0; j < n-i; j++){
            cout << "* ";
        }
        cout << endl;
        upper_spaces += 2;
    }

    // Lower half
    int lower_spaces = 2*n - 2;
    for (int i = 0; i < n; i++){

        // Stars
        for (int j = 0; j < i+1; j++){
            cout << "* ";
        }
        
        // Spaces
        for (int blank = 0; blank < lower_spaces; blank++){
            cout << "  ";
        }
        // Stars
        for (int j = 0; j < i+1; j++){
            cout << "* ";
        }
        
        cout << endl;
        lower_spaces -= 2;
    }
}

void pattern20(int n){


    // Upper half
    int upper_spaces = 2*n - 2;
    for (int i = 0; i < n; i++){

        // Stars
        for (int j = 0; j < i+1; j++){
            cout << "*";
        }

        // Spaces
        for (int blank = 0; blank < upper_spaces; blank++){
            cout << " ";
        }

        for (int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
        upper_spaces -= 2;
    }

    // Lower Half
    int lower_spaces = 2;
    for (int i = 0; i < n-1 ; i++){
        
        // Stars
        for (int j = 0; j < n - 1 - i; j++){
            cout << "*";
        }

        // Spaces
        for (int blank = 0; blank < lower_spaces; blank++){
            cout << " ";
        }

        // Stars
        for (int j = 0; j < n - 1 - i; j++){
            cout << "*";
        }
        cout << endl;
        lower_spaces += 2;
    }
}

void pattern20_striver(int n){ // Revise
    int spaces = 2*n -2;
    
    for (int i = 0; i < 2*n; i++){
        int stars = i;
        if (i > n) stars = 2*n - i;     //NOTE

        for (int j = 0; j <= stars; j++){
            cout << "*";
        }

        for (int blank = 0; blank <= spaces; blank++){
            cout << " ";
        }

        for (int j = 0; j <= stars; j++){
            cout << "*";
        }

        cout << endl;
        if (i < n) spaces -= 2;
        else spaces += 2;
    }
}

void pattern21(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (((i == 0) || (i == n-1)) || ((j == 0) || (j == n-1))){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n){
    int size = (2 * n) - 1;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            
            int top = i; 
            int bottom = (2*n - 2) - i;  
            int left = j;
            int right = (2*n - 2) - j;

            cout << n - min( min(top,bottom), min(left,right)) << " ";
        }
        cout << endl;
    }
}

int main(){
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern22(n);
        cout << endl;
    }
    return 0;
}