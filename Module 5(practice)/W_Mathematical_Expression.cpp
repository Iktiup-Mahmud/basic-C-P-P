#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, result;
    char d, e;
    cin >> a >> d >> b >> e >> c;

    if (d == '+')
    {
        result = a + b;
        if (result == c)
        {
            result = 1;
        }
        else
        {
            result = result;
        }
    }else if(d == '-'){
        result = a-b;
        if (result == c)
        {
            result = 1;
        }
        else
        {
            result = result;
        }
    }else if(d == '*'){
        result = a * b;
        if (result == c)
        {
            result = 1;
        }
        else
        {
            result = result;
        }
    }

    if(result == 1){
        cout << "Yes";
    }else{
        cout << result;
    }

    return 0;
}