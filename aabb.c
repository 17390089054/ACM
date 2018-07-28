#include <stdio.h>
#include <math.h>
int main()
{
    for (int a = 1; a <= 9; a++)
        for (int b = 0; b <= 9; b++)
        {
            int n = a * 1100 + b * 11;    //定义n
            int m = floor(sqrt(n) + 0.5); //加0.5四舍五入减少误差
            if (m * m == n)
                printf("%d\n", n);
        }
    return 0;
}