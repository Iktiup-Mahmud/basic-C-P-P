#include <stdio.h>

int main()
{

    int n;
    char a = '*';
    

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // for (int j = 0; j < i; j++)
        // {
        //     printf(" ");
        // }
        for (int j = 0; j < i; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }

    return 0;
}