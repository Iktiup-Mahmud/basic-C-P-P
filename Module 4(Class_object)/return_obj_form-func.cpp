#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    char sec;
    string name;
    Student(int r, int c, char s, string n)
    {
        roll = r;
        cls = c;
        sec = s;
        // strcpy(name, n);
        name = n;
    };
};

Student func()
{
    char name[100] = "Rahim Ullah";

    Student rahim(19, 24, 'a', name);

    return rahim;
};

int main()
{
    Student rahim = func();

    cout << rahim.cls;
    cout << rahim.roll;
    return 0;
};