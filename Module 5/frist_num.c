#include <stdio.h>
int main()
{
    int num;
    int frist_digit = 0;
    scanf("%d", &num);

    frist_digit = num / 1000;

    if (frist_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}