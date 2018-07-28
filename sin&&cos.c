#include <stdio.h>
#include <math.h>
int main()
{   
    int n;
    scanf("%d",&n);
    if(n<360)
    {
          printf("%f\n",sin(n));
          printf("%f\n",cos(n));
    }
      


    return 0;
}