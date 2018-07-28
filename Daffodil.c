#include <stdio.h>
int calculate(int x)
{
    return x * x * x;
}
int isDaffodol(int y)
{
    int t = y % 10;
    int h = y / 10 % 10;
    int th = y / 100;
    return calculate(t) + calculate(h) + calculate(th) == y;
}

int main()
{
    for (int i = 100; i <= 999; i++)
    {
        if (isDaffodol(i))
            printf("%d ", i);
    }
   
    return 0;
}