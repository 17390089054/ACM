#include <stdio.h>
int main()
{
    int a, b, c, count = 0;
    while (scanf("%d%d%d", &a, &b, &c) && a && b && c)
    {
        //先输出整数部分
        printf("Case %d: %d.", ++count, a / b);
        //a%=b;
        //小数点前c-1位 a*10/b 输出
        for (int i = 0; i < c - 1; i++)
        {
            a *= 10;
            printf("%d", a / b);
            a %= b;
        }
        //最后一位四舍五入
        int lst = ((a * 10 % b) * 10) / b; //最后一位的后一位判断
        if (lst >= 5)
        {
            printf("%d\n", (a * 10) / b + 1);
        }
        else
            printf("%d\n", (a * 10) / b);
    }

    return 0;
}
