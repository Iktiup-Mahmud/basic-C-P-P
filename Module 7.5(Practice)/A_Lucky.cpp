#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        // for (char c: x/2)
        // {
        //     cout << c;
        //     // if()
        // }
        int length = x.length();

        int left = 0, right = 0;
        for (int i = 0; i < length; i++)
        {

            if (i < length / 2)
            {
                left += x[i];
            }
            else
            {
                right += x[i];
            }
        }
        // cout << left << " " << right;
        if(left == right){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;

        }

        // cout << endl;

        // cout<< x[0] + x[1] << endl;
    }

    return 0;
}