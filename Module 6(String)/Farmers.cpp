#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        int m1, m2, d;
        scanf("%d%d %d", &m1, &m2, &d);
        // cout << m1 << " " << m2 << " " << d << " " << n << endl;

        int after_day = (m1 * d) / (m1 + m2);

        // cout << d - after_day << endl;
        // cout << d << endl;
        printf("%d \n", d -after_day);
        n--;
    }

    return 0;
}