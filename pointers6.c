#include<stdio.h>
void divide(int a, int b, int *quotient, int *remainder);
int main(){
    int x,y,q,r;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    divide(x,y,&q,&r);
    printf("%d / %d = %d remainder %d", x, y, q, r);
}
void divide(int a, int b, int *quotient, int *remainder){
    *quotient = a/b;
    *remainder = a%b;
}