#include <stdio.h>
int main()
{
    long long int a,b,c,d,x,y,S;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    x=a*b;
    y=c*d;
    S=x-y;
    printf("Difference = %lld",S);
    return 0;
}