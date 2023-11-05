#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (i == j || i == k || j == k)
                    continue;
                else
                {
                    count++;
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    cout << count;
    
    return 0;
}