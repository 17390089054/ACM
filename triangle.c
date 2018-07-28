#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a + b > c && a + c > b && b + c > a) && (a - b < c && a - c < b && b - c < a))
            printf("yes\n");
        else
            printf("no\n");
    }
    else
        printf("not a triangle!\n");

    return 0;
}