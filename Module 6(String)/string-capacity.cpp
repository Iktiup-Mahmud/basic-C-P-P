#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello world!";

    // cout << s.size() <<endl;
    // cout << s.length() <<endl;
    // cout << s.max_size() <<endl;

    // a string can dyanmically increase its size
    // cout << s.capacity() << endl;
    // s = "abcdefghijklmnopqrstuvwxyz";
    // cout << s.capacity() << endl;

    // cout << s << endl;
    // s = "Seyam";
    // cout << s << endl;
    // s.clear();
    // cout << s.size() << endl;

    // string s = " ";
    // if(s.empty() == true ) cout << "Empty";
    // else cout << "Not";

    string c = "Hello Bangladesh";
    c.resize(5);
    cout << c << endl;
    c.resize(10, 's');
    cout << c << endl;

    return 0;
}