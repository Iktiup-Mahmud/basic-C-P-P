#include <bits/stdc++.h>
using namespace std;

class Crickter
{
public:
    int jersey_no;
    char country;
};

Crickter *dhoni()
{
    Crickter *a = new Crickter;
    a->country = 'I';
    a->jersey_no = 70;
    return a;
};

Crickter* koholi()
{
    Crickter *b = new Crickter;
    Crickter *a = dhoni();
    // b->country = a->country;
    // b->jersey_no = a->jersey_no;
    b =a;
    return b;
};

int main()
{
    Crickter *dhoni1 = dhoni();
    Crickter *koholi1 = koholi();

    // cout << dhoni1->country;
    // cout << dhoni1->jersey_no;
    cout << koholi1->country;
    cout << koholi1->jersey_no;

    return 0;
}