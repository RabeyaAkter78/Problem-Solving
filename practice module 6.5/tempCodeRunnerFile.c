#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int length = strlen(s);
    int fre[26] = {0};
  
    for (int i = 0; i < length; i++)
    {
        int val = s[i]-'a';
        fre[val]++;
    }
    for (int i = '0'; i <'25'; i++)
    {
        printf("%c - %d", s[i], fre[i]);
    }
    return 0;
}