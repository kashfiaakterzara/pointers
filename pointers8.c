#include<stdio.h>
void stats3(int a, int b, int c, int *max, int *min, double *avg);
int main(){
    int a, b, c, max, min;
    double avg;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    stats3(a,b,c,&max,&min,&avg);
    printf("Min = %d, Max = %d, Average = %.2lf\n", min, max, avg);


}
void stats3(int a, int b, int c, int *max, int *min, double *avg){
    *max = a;
    if(b>*max){
        *max = b;
    }
    if(c>*max){
        *max = c;
    }

    *min = a;
    if(c<*min){
        *min = c;
    }
    if(b<*min){
        b = *min;
    }
    *avg = (a+b+c)/3.00;
}