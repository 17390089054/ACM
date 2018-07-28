#include <stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d%d",&n,&m);
    b=(m-2*n)/2;
    a=n-b;
    if(m%2==1||b<0||a<0)
        printf("No answer!");
    else
        printf("%d %d\n",a,b);
    return 0;
}