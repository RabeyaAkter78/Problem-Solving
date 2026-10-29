#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", &s);
    int length = strlen(s);
    int count_c = 0;
    for (int i = 0; i < length; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                count_c++;
            }
        }

        printf("%d", count_c); 

    return 0;
}