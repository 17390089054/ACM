#include <stdio.h>
int main()
{ 
    double n=3.141592653589764626;  
    printf("%f\n",n);//输出3.141593 double型数据只能精确到小数点后六位

    //double型浮点数最大正数值和最小正数值
    double i=0.0000000000000001;
    for(;i>0;i+=0.0000000000000001){

    }
    printf("%.100lf\n%.100lf\n",i,i-1);
    return 0;
}