#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    // scanf("%d %d %d",&a[0],&a[1],&a[2]);
    // printf("%d %d %d",a[0],a[1],a[2]);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ",a[i]);
        
    }

    return 0;
}