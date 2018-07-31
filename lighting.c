#include <stdio.h>
#include <string.h>
#define maxlen 1010
int a[maxlen];
int main()
{
    int n, k, first = 1;   
    scanf("%d%d", &n, &k);
    //数组数据清零 其包含在string.h的头文件中
     memset(a, 0, sizeof(a));
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= n; j++)
            if (j % i == 0)
                a[j] = !a[j];

    for (int i = 1; i <= n; i++)
    {
        if (a[i])
        {
            if (first)//输出的第一个数字之前不应该有空格
                first = 0;
            else
                printf(" ");
         printf("%d ", i);
        }
       
    }
    printf("\n");
    return 0;
}