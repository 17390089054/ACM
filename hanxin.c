#include <stdio.h>
int main()
{
    int a, b, c, cnt = 1;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        int i;
        for (i = 10; i <= 100; i++)
        {
            if (i % 3 == a && i % 5 == b && i % 7 == c)
            {
                printf("Case %d: %d\n", cnt++, i);
                break;
            }
        }
        if (i > 100)
            printf("Case %d :No answer\n", cnt++);
    }

    return 0;
}