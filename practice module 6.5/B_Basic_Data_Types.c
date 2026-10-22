#include <stdio.h>
int main()
{
    int n ;
    long long int a;
    char ch;
    float f;
    double d;

    scanf("%d %lld %c %f %lf", &n, &a, &ch, &f, &d);
    printf("%d\n%lld\n%c\n%.2f\n%.1f\n",n,a,ch,f,d);

    return 0;
}