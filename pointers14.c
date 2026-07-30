#include<stdio.h>
void scale_value(double *price, double factor);
void scale_value(double *price, double factor){
    *price *= factor;
}
int main(){
    double price, factor;
    printf("Enter price: ");
    scanf("%lf", &price);
    printf("Enter factor: ");
    scanf("%lf", &factor);
    scale_value(&price, factor);
    printf("Price = %.2lf", price);

}