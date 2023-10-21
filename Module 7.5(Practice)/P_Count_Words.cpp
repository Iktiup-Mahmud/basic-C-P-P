#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout << s;

    int count = 0;

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if ((*word.begin() >= 'A' && *word.begin() <= 'Z') || (*word.begin() >= 'a' && *word.begin() <= 'z')) count++;
        // else if count++;
        // cout << *word.begin()  << endl;
        // cout << *word.end()  << endl;
    }

    cout << count << endl;

    return 0;
}