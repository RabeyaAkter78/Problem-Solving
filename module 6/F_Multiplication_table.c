#include <stdio.h>
int main()
{
    int n;
    int x = 12;
    scanf("%d", &n);

    for (int i = 1; i <= x; i++)
    {
        printf("%d * %d = %d\n", n, i ,n * i);
    }

    return 0;
}