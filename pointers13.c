#include<stdio.h>
int clamp(int *value, int low, int high);
int clamp(int *value, int low, int high){
    if(*value>high){
        *value = high;
    }
    if(*value<low){
        *value = low;
    }
}
int main(){
    int reading = -15;
    clamp(&reading, 0, 100);
    printf("reading = %d\n");
    return 0;
}