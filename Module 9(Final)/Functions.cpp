#include <bits/stdc++.h>
using namespace std;


int func(int a, int b, int c, int d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if (b>a && b > c && b > d)
    {
        return b;
    }
    else if (c > b && c > a && c > d)
    {
        return c;
    }else{
        return d;
    }
};


int main()
{
    int a, b, c, d;
    cin >> a>> b>> c>> d;
    int x = func(a, b, c ,d);
    cout << x;

    return 0;
}