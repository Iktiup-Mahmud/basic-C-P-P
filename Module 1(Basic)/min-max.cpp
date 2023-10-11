#include <iostream>
#include <algorithm>
using namespace std;

// int my_min(int a, int b)
// {
//     if (a > b)
//         return b;
//     else
//         return a;
// }

// int my_max(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

int main()
{
    int a, b;

    cin >> a >> b;

    int mi = min(a, b);
    int mx = max(a, b);

    cout << mi << " " << mx;

    return 0;
}