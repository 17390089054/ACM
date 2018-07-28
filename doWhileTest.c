#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0;
    double term = 0, sum = 0;
    do
    {
        term = 1.0 / (2 * i + 1);
        if (i % 2 == 0)
            sum += term;
        else
            sum -= term;
        i++;
    } while (term >= 1e-6);
    printf("%f\n", sum);
    //验证最终结果与pi/4是否一致
    const double pi = acos(-1.0);
    printf("%f\n", pi / 4);

    return 0;
}