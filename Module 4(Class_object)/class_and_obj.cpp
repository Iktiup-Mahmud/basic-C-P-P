#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student seyam;
    seyam.cls = 13;
    seyam.roll = 19;
    seyam.section = 'A';
    char name[100] = "IKTIUP";
    strcpy(seyam.name, name);

    cout << seyam << " ";

    return 0;
}