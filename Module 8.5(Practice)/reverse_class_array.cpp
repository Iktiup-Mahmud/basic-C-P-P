#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
};


int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}