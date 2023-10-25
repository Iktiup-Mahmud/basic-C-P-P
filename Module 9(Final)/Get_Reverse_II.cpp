#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    // for (int i = 0; i < n / 2; i++)
    // {
    //     for (int j = n-1; j > n / 2; j--)
    //     {
    //         int temp_id = arr[i].id;
    //         arr[i].id = arr[j].id;
    //         arr[j].id = temp_id;

    //         cout << i << j << endl;
    //     }
    // }
    int i = 0, j = n - 1;

    while (i < n / 2)
    {
        // cout << i << j << endl;
        int temp_id = arr[i].id;
        arr[i].id = arr[j].id;
        arr[j].id = temp_id;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
    cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    // cout << i;
    }

    return 0;
}