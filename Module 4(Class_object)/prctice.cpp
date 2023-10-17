#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    char sec;
    string name;

    Student(int c, int r, char s, string n)
    {
        cls = c;
        roll = r;
        sec = s;
        name = n;
    }
};

Student func()
{
    Student rahim = Student(9, 16, 'A', "Rahim Ullah");
    return rahim;
}

int main()
{
    Student a = func();

    cout << a.cls << endl;
    cout << a.sec << endl;

    return 0;
}