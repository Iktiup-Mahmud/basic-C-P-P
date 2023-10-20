#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";

    // a += b; /*mostly used*/
    // a.append(b);

    // a += 'a';
    // a.push_back('x');
    // a.pop_back();

    // a = "Gelo"; /*mostly used*/
    // a.assign("gelo");

    string c = "Baiust";
    // c.erase(3, 1);
    // c.replace(4, 2, "ij");
    c.replace(4, 0, "ij");
    // c.insert(4, "ABCD");

    // cout << a << endl;
    // cout << b << endl;
    cout << c << endl;

    return 0;
}