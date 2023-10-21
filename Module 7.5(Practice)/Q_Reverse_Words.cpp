#include <bits/stdc++.h>
using namespace std;

// void print(stringstream &s)
// {
//     string word;
//     if (s >> word)
//     {
//         reverse(*word.begin(),*word.end() );
//         cout << word << " ";
//         print(s);
//     }
// }

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    // print(ss);

    string test = "";

    while (ss >> word)
    {

        reverse(word.begin(), word.end());
        // if(*word.begin() != '\0') cout<< "a";
        // cout << word << " ";
        test += word + " ";
        // if (!first_word)
        // {
        //     cout << 'a';
        // }
        // first_word = false;
        // cout << *word.begin();
        // cout << *word.end();
    }

    test.pop_back();
    cout << test;

    return 0;
}