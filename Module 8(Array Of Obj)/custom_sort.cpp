#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char a;
    int count;
};

bool cmp(CustomSort a, CustomSort b)
{
    if (a.count > b.count)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    CustomSort arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i].a = 'a' + i;
        arr[i].count = 0;
    }
    for (int i = 0; i < n; i++)
    {
        // arr[i].a = 'a'+ i;
        // arr[i].count=0;
        // cout << arr[i].a << " " << arr[i].count << endl;
        char a;
        cin >> a;
        arr[a - 'a'].count++;
    }

    // sort
    sort(arr, arr + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if (arr[i].count > 0)
        {
            // cout << arr[i].count << " " << arr[i].a << endl;
            for (int j = 0; j < arr[i].count; j++)
            {
                cout << arr[i].a;
            }
            
        }
    }

    return 0;
}