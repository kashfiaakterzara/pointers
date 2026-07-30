#include<stdio.h>
void increment(int *p);
void decrement(int *p);
void increment(int *p){
    (*p)++;
}
void decrement(int *p){
    (*p)--;
}
int main(){
    int count = 10;
    increment(&count);
    printf("After increment: %d\n", count);

    decrement(&count);
    decrement(&count);
    printf("After decrement: %d", count);

}