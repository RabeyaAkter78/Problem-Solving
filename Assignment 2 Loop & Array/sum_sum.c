#include <stdio.h>
int main()
{
    int n;
    scanf(" %d", &n);
    int num;
    int posSum = 0;
    int negSum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        // printf("%d ", num);

        if (num >= 0)
        {
            // printf("%d positive\n", num);
            posSum = posSum + num;
        }
        if (num < 0)
        {
            // printf("%d negative\n", num);
            negSum = num + negSum;
        }
    }
    printf("%d %d", posSum, negSum);

    return 0;
}