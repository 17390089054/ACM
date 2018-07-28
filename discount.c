#include <stdio.h>
int main()
{
    int num;
    double total,pay;
    const double price=95;
    scanf("%d",&num);
    if(num<=0)
        total=0;
    else 
        total=price*num;
    if(total>=300)
        pay=total*0.85;
    else
        pay=total;
    printf("%.2f",pay);
    return 0;
}