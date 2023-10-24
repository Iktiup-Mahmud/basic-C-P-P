#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
};

void func(Student *a, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = n - 1; j < n / 2; j--)
        {
            // swap(a[i], [j]);
            Student temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
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

    func(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}