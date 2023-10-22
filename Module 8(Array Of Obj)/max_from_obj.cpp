#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int cls;
    char sec;
};

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].cls;
        cin.ignore();
    }

    Student max;
    max.age = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].age > max.age)
        {
            max = a[i];
        }
    }

    cout << max.name ;

    return 0;
}