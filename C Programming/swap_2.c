#include<stdio.h>
int swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=101;
    int y=110;
    printf("Values Before swap: x = %d, y = %d\n",x,y);
    swap(&x,&y);
    printf("Values After Swap: x = %d, y = %d",x,y);
}
