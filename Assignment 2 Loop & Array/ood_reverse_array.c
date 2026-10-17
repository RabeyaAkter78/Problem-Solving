#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n];
    // printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d \n", arr[i]);

        if (i % 2 != 0)
        {
           
            int r = arr[i];
            printf("%d \n", arr[r]);
            //  r = arr[i];
            //  printf("R %d ", r);

            // for (int i = r; i <= 0; i--)
            // {
            //     printf("%d", i);
            // }
        }
    }

    return 0;
}