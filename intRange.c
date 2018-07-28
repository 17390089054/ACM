#include <stdio.h>
int int_min()
{
    int n = 0, i = 0;
    while (n >= i)
    {
        n = i;
        i--;
    }
    return n;
}

int int_max()
{
    int n = 0, i = 0;
    while (n <= i)
    {
        n = i;
        i++;
    }
    return n;
}
int main()
{
    printf("INT_MAX=%d\n", int_max());
    printf("INT_MIN=%d\n", int_min());
    return 0;
}