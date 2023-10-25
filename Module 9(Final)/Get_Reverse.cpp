#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int mathMark, englishMark;
};

// Student *rev(Student* a[], int n){
//     for (int i = 0; i < n/2; i++)
//     {
//         for (int j = n; j > n/2; j--)
//         {
//             Student temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;   
//         }

//     }
//     return *a;
// }


int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].mathMark >> arr[i].englishMark;
    }

    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i].name << " "<< arr[i].cls << " " << arr[i].s << " " << arr[i].mathMark<< " " << arr[i].englishMark << endl;
        // cout << i;
    }
    // int *a = rev(arr, n);


    

    return 0;
}