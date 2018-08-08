#include <stdio.h>
#include <string.h>
#define size 1005
int a[size],b[size];
int main()
{
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
		int n,kase=0;
		while(scanf("%d",&n)==1&&n)//输入0则结束
		{
        printf("Game %d:\n",++kase);

				for(int i=0; i<n; i++)
				{
						scanf("%d",&a[i]);
				}



				for(;;)
				{
						int A=0,B=0;
						for(int i=0; i<n; i++)
						{
								scanf("%d",&b[i]);
								if(a[i]==b[i])
										A++;
						}
            //若输入的第一个元素为0，则认定序列全为0
						if(b[0]==0)
								break;
						//统计序列中1-9数字出现的次数

						for(int j=1; j<=9; j++)
						{
              	int c1=0,c2=0;

								for(int i=0; i<n; i++)
								{
										if(a[i]==j) c1++;
										if(b[i]==j) c2++;
								}
								if(c1<c2)
										B+=c1;
								else
										B+=c2;
						}

						printf("   (%d,%d)\n",A,B-A);

				}

		}

		return 0;
}
