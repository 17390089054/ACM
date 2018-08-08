#include <stdio.h>
#include <string.h>
#define size 100005
int a[size];
int main(){
memset(a,0,sizeof(a));
int T,n;
for(int m=1;m<size;m++)
{
  int x=m,y=m;
  while(x>0)
  {
    y+=x%10;
    x/=10;
  }
  if(a[y]==0||a[y]>m)
  a[y]=m;

}
scanf("%d",&T);
while(T--)
{
  scanf("%d",&n);
  printf("%d\n",a[n]);
}


return 0;
}
