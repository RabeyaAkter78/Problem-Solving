#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("%d\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[n]);

        printf("All: arr[%d] ", arr[n]);

        if (i % 2 == 0)
        {
            // printf("Even index:%d \n", arr[n]);
        }
    }
    return 0;
}