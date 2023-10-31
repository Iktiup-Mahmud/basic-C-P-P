#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id, mathMark, englishMark;
};

bool cmp(Student a, Student b)
{
    if (a.englishMark + a.mathMark > b.englishMark + b.mathMark)
    {
        return true;
    }
    else if (a.englishMark + a.mathMark == b.englishMark + b.mathMark)
    {

        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
};


int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].mathMark >> arr[i].englishMark;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].mathMark << " " << arr[i].englishMark << endl;
        // cout << i;
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int cls;
//     char s;
//     int id, mathMark, englishMark;
// };

// bool cmp(Student a, Student b)
// {
//     if (a.englishMark + a.mathMark > b.englishMark + b.mathMark)
//     {
//         return true;
//     }
//     else if (a.englishMark + a.mathMark == b.englishMark + b.mathMark)
//     {

//         if (a.id < b.id)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     else
//     {
//         return false;
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;

//     Student arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].mathMark >> arr[i].englishMark;
//     }

//     sort(arr, arr + n, cmp);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].mathMark << " " << arr[i].englishMark << endl;
//         // cout << i;
//     }

//     return 0;
// }