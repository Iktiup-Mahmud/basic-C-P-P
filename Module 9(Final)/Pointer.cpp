#include <bits/stdc++.h>
using namespace std;

int suma(int *a,int *b){
    int sum = *a + *b;
    int minu = *a -*b;

    if(minu < 0){
        minu *= -1;
    }
    // cout << sum << endl;
    // cout << minu<< endl;
    // cout << *a;
    return sum, minu;
}

int main()
{
    int a, b;
    cin >> a>>b;

    int x = suma(&a, &b);
    // suma(&a, &b);

    cout << x;
      
    return 0;
}