#include <bits/stdc++.h>
using namespace std;

int suma(int *a,int *b){
    int sum = *a + *b;
    int minu = *a -*b;

    if(minu < 0){
        minu *= -1;
    }
    cout << sum << endl;
    cout << minu<< endl;
    // cout << *a;
    return sum, minu;
}

int main()
{
    int a, b;
    cin >> a>>b;

    suma(&a, &b);


      
    return 0;
}