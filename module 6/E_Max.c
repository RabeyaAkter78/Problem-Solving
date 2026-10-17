// find maximum number from given n numbers.

// #include <stdio.h>
// int main()
// {
//     int x;

//     int max = 0;
//     scanf("%d", &x);

//     for (int i = 1; i <= x; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         if (n > max)
//         {
//             max = n;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// find maximum number from given n negative numbers.
// #include <stdio.h>
// #include<limits.h>
// int main()
// {
//     int x;

//     int max = INT_MIN;
//     scanf("%d", &x);

//     for (int i = 1; i <= x; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         if (n > max)
//         {
//             max = n;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }
// find minimum number from given n numbers.
#include <stdio.h>
#include<limits.h>
int main()
{
    int x;

    int max = INT_MAX;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        int n;
        scanf("%d", &n);

        if (n < max)
        {
            max = n;
        }
    }
    printf("%d", max);
    return 0;
}