#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char sec;
    int math_mark;
    int cls;

    Student(string n, int r, char s, int m_m, int c)
    {
        name = n;
        roll = r;
        sec = s;
        math_mark = m_m;
        cls = c;
    }
};

int main()
{
    Student seyam("Iktiup Mahmud", 19, 'A', 600, 13);
    Student sezan("Imtiaz Mahmud", 18, 'A', 800, 11);
    Student said("Said Mahmud", 1, 'A', 100, 2);

    // cout << seyam.name;

    if (seyam.math_mark > sezan.math_mark && seyam.math_mark > said.math_mark)
    {
        // if()
        cout << seyam.name;
    }
    else if (seyam.math_mark < sezan.math_mark && sezan.math_mark > said.math_mark)
    {
        // if()
        cout << sezan.name;
    }else{
        cout << said.name;
    }

    return 0;
}