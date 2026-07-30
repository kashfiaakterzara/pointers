#include<stdio.h>
void abs_and_sign(int n, int *abs, int *sign);
int main(){
    int n, a, s;
    
    printf("Enter integer: ");
    scanf("%d", &n);
    abs_and_sign(n,&a,&s);
    printf("absVal = %d, sign = %d", a, s);
}
void abs_and_sign(int n, int *abs, int *sign){
    if(n<0){
        *abs = -n;
        *sign = -1;
    }
    if(n>0){
        *abs = n;
        *sign = 1;
    }
    if(n=0){
        *abs = 0;
        *sign = 1;
    }
}