#include <iostream>
using namespace std;

int main(){

    int value;
    cin >> value;
    switch(value){
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        default:
            cout << "Didn't match";
    }

    // cout << value;
    return 0;
}