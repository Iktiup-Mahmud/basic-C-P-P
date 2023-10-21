#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout << s;

    int count = 0;
    bool in_word = false;

    // stringstream ss(s);
    // string word;

    // while (ss >> word)
    // {
    //     // if ((*word.begin() >= 'A' && *word.begin() <= 'Z') || (*word.begin() >= 'a' && *word.begin() <= 'z')) count++;
    //     if(isalpha(word[0]))count++;
    //     // else if count++;
    //     // cout << *word.begin()  << endl;
    //     // cout << *word.end()  << endl;
    // }

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!in_word)
            {
                in_word = true;
                count++;
            }
        }else{
            in_word = false;
        }
    }

    cout << count << endl;

    return 0;
}