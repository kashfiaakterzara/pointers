#include<stdio.h>
void swap_double(double *a, double *b);
void swap_double(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    double temp1 = 36.6, temp2 = 39.2;
    printf("Before: temp1 = %.1lf, temp2 = %.1lf\n", temp1, temp2);
    swap_double(&temp1, &temp2);
    printf("After: temp1 = %.1lf, temp2 = %.1lf\n", temp1, temp2);

}