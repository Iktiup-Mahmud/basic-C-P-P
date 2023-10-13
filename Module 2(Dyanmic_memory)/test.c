#include <stdio.h>

int main()
{
    int *a;
    int b = 10;
    *a = b;

    printf("%d-pointer ", *a);
    printf("%d-&value ", &a);

    printf("%d-pointer ", b);
    printf("%d-&value ", &b);
    return 0;
}