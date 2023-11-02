#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int first, second, third, fourth, fifth;

    // Student(int first,int second,int third,int fourth,int fifth){
    //     first = this->first;
    //     second = this->second;
    //     third = this->third;
    //     fourth = this->fourth;
    //     fifth = this->fifth;
    // }
};

int func(Student a)
{
    int x = a.first + a.second + a.third + a.fourth + a.fifth;
    return x;
}

int main()
{
    int n;
    cin >> n;

    // int arr[n][5];
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second >> arr[i].third >> arr[i].fourth >> arr[i].fifth;
    }

    int a = arr[0].first + arr[0].second + arr[0].third + arr[0].fourth + arr[0].fifth;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        // cout << arr[i].first << arr[i].second << arr[i].third << arr[i].fourth << arr[i].fifth;
        int x = func(arr[i]);
        if(x>a){
            temp++;
        }
    }

    cout << temp;

    return 0;
}