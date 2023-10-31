#include <stdio.h>
#include <math.h>

int main()
{
    float ax, ay, bx, by, cx, cy;
    double ans;

    printf("Please enter 'aX': ");
    scanf("%f", &ax);

    printf("\nPlease enter 'aY': ");
    scanf("%f", &ay);

    printf("\nPlease enter 'bX': ");
    scanf("%f", &bx);

    printf("\nPlease enter 'bY': ");
    scanf("%f", &by);

    printf("\nPlease enter 'cX': ");
    scanf("%f", &cx);

    printf("\nPlease enter 'cY': ");
    scanf("%f", &cy);

    ans = fabs((ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2);
    printf("\nThe area is: %lf square units\n", ans);

    // printf("%f\n", ax);
    // printf("%f\n", ay);
    // printf("%f\n", bx);
    // printf("%f\n", bx);
    // printf("%f\n", cx);
    // printf("%f\n", cy);
    // getchar();
    return 0;
}