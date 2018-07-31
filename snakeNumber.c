#include <stdio.h>
#include <string.h>
#define maxSize 20
int a[maxSize][maxSize];
int main()
{
    int n, x, y, tot;
    scanf("%d", &n);
    memset(a, 0, sizeof(a)); 
    //右上角元素赋初值
    tot = a[x = 0][y = n - 1] = 1;
    while (tot < n * n)
    {
        while (x + 1 < n && !a[x + 1][y])
            a[++x][y] = ++tot; //向下移动
        while (y - 1 >= 0 && !a[x][y - 1])
            a[x][--y] = ++tot; //向左移动
        while (x - 1 >= 0 && !a[x - 1][y])
            a[--x][y] = ++tot; //向上移动
        while (y + 1 < n && !a[x][y + 1])
            a[x][++y] = ++tot; //向右移动
    }

    //遍历
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}