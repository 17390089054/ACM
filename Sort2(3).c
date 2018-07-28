#include <stdio.h>
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    } //执行完后a<=b
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    } //执行完后a<=c 且a<=b仍然成立
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}