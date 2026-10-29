#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[100001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int length = strlen(s);
        int count_CA = 0;
        int count_SA = 0;
        int count_d = 0;
        for (int i = 0; i < length; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                count_CA++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                count_SA++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                count_d++;
            }
        }
        printf("%d %d %d\n", count_CA, count_SA, count_d);
    }
    return 0;
}