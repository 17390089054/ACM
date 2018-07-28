#include <stdio.h>
int main()
{
    double n, m, sum = 0;
    int count = 0;
    while (scanf("%lf%lf", &n, &m) && n && m)
    {
        for (double i = n; i <= m; i++)
        {
            sum += 1.0 / (double)(i * i);
        }
        printf("Case %d: %.5f\n", ++count, sum);
    }

    return 0;
}