#include<stdio.h>
int main(){
    int score = 50;
    int *p = &score;
    printf("Before: score = %d\n", score);
    *p *= 2;
    printf("After: score = %d\n", score);
}