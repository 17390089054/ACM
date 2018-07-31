#include <stdio.h>
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    int c, i;
    while ((c = getchar()) != EOF)
    {
        for (i = 1; s[i] && s[i] != c; i++);//找到错位后的字符在常量表达式中的值
        if (s[i])//找到的话输出它的前一个字符
            putchar(s[i - 1]);
        else
            putchar(c);
    }
    return 0;
}