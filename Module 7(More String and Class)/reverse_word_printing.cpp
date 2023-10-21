#include <bits/stdc++.h>
using namespace std;

void func(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        func(ss);
        cout << word << endl;
    }
};

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    func(ss);

    // string word;

    // while(ss >> word){
    //     cout << word <<endl;
    // }

    return 0;
}