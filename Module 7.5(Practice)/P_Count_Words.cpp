#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout << s;

    // stringstream ss(s);
    // string word;

    // while (ss >> word)
    // {
    //     // if ((*word.begin() >= 'A' && *word.begin() <= 'Z') || (*word.begin() >= 'a' && *word.begin() <= 'z')) count++;

    //     for(char c: word){
    //         if((c>= 'a' && c <='z') || (c >='A' && c<= 'Z')){
    //             count++;
    //             break;
    //             // cout << c << endl;
    //         }
    //     }

    //     // if(isalpha(word[0]))count++;
    //     // else if count++;
    //     // cout << *word.begin()  << endl;
    //     // cout << *word.end()  << endl;
    // }
    int count = 0;
    bool inside_word = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if(!inside_word){
                count++;
                inside_word = true;
            }
        }
        else
        {
            inside_word = false;
        }
    }

    cout << count << endl;

    return 0;
}