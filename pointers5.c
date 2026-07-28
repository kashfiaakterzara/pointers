#include<stdio.h>
#define pi 3.1416
void circle_stats(double radius, double *area, double *circumference);
void circle_stats(double radius, double *area, double *circumference){
    *area = pi*radius*radius;
    *circumference = 2*pi*radius;
}
int main(){
    double radius;
    double area, circumference;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    circle_stats(radius, &area, &circumference);
    printf("Area = %lf\n", area);
    printf("Circumference = %lf\n", circumference);

}