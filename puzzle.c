#include <stdio.h>
#include <string.h>

char command[100000];
char a[5][5];
int pos[2];    //X:pos[0] Y:pos[1]
int f=1;

void swap(char *a,char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}

void solve(int n)                //原来的错误代码 solve()
{
    for(int i = 0; i < n; i++)   //原来的错误代码 for(int i = 0; i < strlen(commmand);i++)
        {
            char c = command[i]; 
            if(c == 'A')
            {
                if(pos[1] - 1 >= 0)
                {
                    swap(&a[pos[1]][pos[0]],&a[pos[1] - 1][pos[0]]);
                    pos[1] -= 1; 
                }
                else
                 f = 0; 
            }
            else if (c == 'B')
            {
                if(pos[1] + 1 <= 4)
                {
                    swap(&a[pos[1]][pos[0]],&a[pos[1] + 1][pos[0]]);
                    pos[1] += 1; 
                }
                else
                 f = 0; 
            }
            else if (c == 'L')
            {
                if(pos[0] - 1 >= 0)
                {
                    swap(&a[pos[1]][pos[0]],&a[pos[1]][pos[0] - 1]);
                    pos[0] -= 1; 
                }
                else
                 f = 0; 
            }
            else if (c == 'R')
            {
                 if(pos[0] + 1 <= 4)
                {
                    swap(&a[pos[1]][pos[0]],&a[pos[1]][pos[0] + 1]);
                    pos[0] += 1; 
                }
                else
                 f = 0;
            }
        }
}

int main()
{
    int kase = 0;
    while(1) {
        f = 1;
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                a[i][j] = getchar();

                if(a[0][0] == 'Z') return 0;
                if(a[i][j] == ' ') { pos[0] = j; pos[1] = i;}
            }
            getchar();          
        }

        int n = 0;
        while(scanf(" %c",&command[n]) == 1)
        {   
            if(command[n] == '0') break;
            else                  n++;
        }
        getchar();  //舍弃命令输入中的回车符

        solve(n);           //原来的错误代码 solve();

        if(kase++)  printf("\n");
        printf("Puzzle #%d:\n",kase);

        if(f)
        {       
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < 5; j++) {
                    if(j) printf(" ");
                    printf("%c",a[i][j]);
                }
                printf("\n");
            }
        }
        else
            printf("This puzzle has no final configuration.\n");
    }
    return 0;
}

