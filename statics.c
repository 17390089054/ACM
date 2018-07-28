#include <stdio.h>
#define INF 1000000000
int main()
{
    int n=0, x = 0, min=INF, max=-INF, s = 0;
    while (scanf("%d", &x) == 1)
    {
        s += x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, (double)s / n);
    return 0;
}