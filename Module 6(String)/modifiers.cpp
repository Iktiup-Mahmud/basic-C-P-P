#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";

    // a += b; /*mostly used*/
    // a.append(b);

    // a += 'a';
    a.push_back('x');
    a.pop_back();

    cout << a << endl;
    cout << b << endl;

    return 0;
}