#include<stdio.h>
int main(){
    double price = 149.99;
    double *pp = &price;
    printf("price = %.2lf\n", price);
    printf("&price = %p\n", &price);
    printf("*pp = %.2lf\n", *pp);
}
