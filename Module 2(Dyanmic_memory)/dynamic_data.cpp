#include <bits/stdc++.h>
using namespace std;
// #include <stdio.h>

int main()
{
    // integer data
    int *a = new int;
    *a = 100;
    // printf("%d ", *a);
    cout << *a << endl;

    // float data
    float *b = new float;
    *b = 20.2432;
    printf("%f ", *b);

    int *axb = new int;
    *axb = 10;
    cout << *axb << endl;

    delete b;

    return 0;
}