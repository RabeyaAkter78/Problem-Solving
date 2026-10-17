#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {

        if (i % 2 != 0)
        {
            int arr2 = arr[i];
            printf("%d\n", arr2);
            printf("\n");
            for (int i = n - 1; i >= 0; i--)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    // printf("\n");
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}