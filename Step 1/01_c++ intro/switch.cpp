#include<bits/stdc++.h>
using namespace std;


/*
NOTE
In Switch statements, break is necessary
*/

/*
Take day as number and print day
1 -> monday and so on
*/

/*
&& - AND operator
*/

int main(){
    int num;
    cin >> num;
    switch(num) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        
        default:
            cout << "Enter correct Number";
            // break; -> No need to typw break here as it is the last cindition
    }

    return 0;
}