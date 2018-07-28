#include <stdio.h>
int main()
{
    for (int x = 1;; x++)
    {
        int n = x * x;
        if (n < 1000)
            continue;
        if (n > 9999)
            break;
        int h = n / 100;
        int l = n % 100;
        if (h / 10 == h % 10 && l / 10 == l % 10)
            printf("%d\n", n);
    }

    return 0;
}