#include <stdio.h>
int main()
{

    int n;
    while (scanf("%d", &n)==1)
    {
        printf("%d \n", n);
        if (n % 2 == 0)
        {
            printf("%d is even\n", n);
            // break;
        }
        else
        {
            printf("%d is odd\n", n);
        }
    }

    return 0;
}