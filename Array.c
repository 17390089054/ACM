#include <stdio.h>
#define maxlength 105
int a[maxlength];
int main()
{
    int x,n=0;
    while(scanf("%d",&x)==1)
        a[n++]=x;
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
    
    return 0;
}