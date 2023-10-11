#include <iostream>
#include <utility>
using namespace std;


// swap
// void my_swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
    // cout << *a << *b;
// }

int main()
{
    int a, b;
    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b;

    return 0;
}
