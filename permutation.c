#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(int argc, char **argv){
    int i,j,k;
    int arr[9];
    for(i=100;i<333;i++){
    for(j=200;j<666;j++){
        for(k=300;k<1000;k++){
        arr[0] = i/100;
        arr[1] = (i/10)%10;
        arr[2] = i%10;
        arr[3] = j/100;
        arr[4] = (j/10)%10;
        arr[5] = j%10;
        arr[6] = k/100;
        arr[7] = (k/10)%10;
        arr[8] = k%10;
        qsort(arr, 9, sizeof(int),compare);
        int m;
        for( m = 0; m<9; m++){
            if(arr[m] != m+1){
            break;
            }
        }   
        if(m == 9){
            if(k%i==0 && j%i == 0 && k/i == 3 && j/i == 2){
            printf("%d %d %d\n",i,j,k);
            }
        }
        }
    }
    }
    return 0;
}
int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}