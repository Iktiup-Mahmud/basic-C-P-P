#include <bits/stdc++.h>
using namespace std;

namespace Seyam
{
    int age = 21;
    void hello()
    {
        cout << "Seyam namespace" << endl;
    };
    class S
    {
    };
};

namespace Se
{
    int age2 = 210;
    void hello2()
    {
        cout << "Seyam namespace2" << endl;
    };
    class S
    {
    };
}

using namespace Seyam;
int main()
{
    // cout << Seyam::age << endl;
    // cout << Se::age2 << endl;

    cout << age << endl;

    return 0;
}