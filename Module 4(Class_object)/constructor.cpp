#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    char section;
    string name;

    Student(int r, int clss, char s, string n)
    {
        roll = r;
        cls = clss;
        section = s;
        // strcpy(name, n);
        name = n;
    }
};

int main()
{
    Student seyam(19, 13, 'A', "Iktiup Mahmud");
    Student abcd(1, 12, 'b', "ABCD");

    cout << seyam.name;
    cout << abcd.name;

    return 0;
}