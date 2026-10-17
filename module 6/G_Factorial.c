#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {

        long long int n;
        long long int fact = 1;
        scanf("%lld", &n);

        if (n == 0)
        {
            printf("1\n");
            continue;
        }

        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("%lld\n", fact);
    }
    printf("\n");

    return 0;
}