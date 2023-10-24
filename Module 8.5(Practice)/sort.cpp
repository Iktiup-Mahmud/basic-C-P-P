#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks > b.marks) return true;
    else if (a.marks == b.marks){
        if(a.roll < b.roll) return true;
        else return false;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        sort(arr, arr + n, cmp);

        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}