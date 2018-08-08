#include <stdio.h>
#include <string.h>
#define maxlen 100
int main()
{
    char s[maxlen];
    int num[maxlen - 1];
    memset(num, 0, sizeof(num));
    int sum = 0, i = 0;
    scanf("%s", s);
    int n = strlen(s);
    if(s[0]=='O')
        num[0]=1;
    else
        num[0]=0;
    for ( i = 0; i < n; i++)
    {
        if (s[i] == 'O')
            num[i] = 1;
        else 
            num[i] = 0;
        if (num[i])
            num[i] = num[i - 1] + 1;
        sum += num[i];
    }
    printf("%d\n",sum);
    return 0;
}