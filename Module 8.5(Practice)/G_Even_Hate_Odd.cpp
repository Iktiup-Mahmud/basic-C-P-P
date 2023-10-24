#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        int res = 0;
        if (a % 2 != 0)
        {
            res = -1;
        }
        else
        {
            int even = 0, odd = 0;
            // if()
            for (int i = 0; i < a; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            if (even - odd == 0)
            {
                res = 0;
            }
            else
            {
                if (even > odd)
                {
                    int cnt = 0;
                    while (even != odd)
                    {
                        cnt++;
                        even--;
                        odd++;
                    }
                    res = cnt;

                    // cout << "1st";
                }
                else
                {
                    int cnt = 0;
                    while (even != odd)
                    {
                        cnt++;
                        even++;
                        odd--;
                    }
                    res = cnt;
                }
                // cout << "2nd" << a << res;
            }

            // cout << even << " "<< odd<< endl;
        }
            // cout << res << " " << a << endl;
            cout << res << endl;
    }

    return 0;
}