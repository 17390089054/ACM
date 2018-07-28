#include <stdio.h>
int sum(int n)
{
    int total=0;
    for(int i=1;i<=n;i++)
        total+=i;
    return total;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",(n+1)*n/2);
   // printf("%d",sum(n));
    return 0;
}