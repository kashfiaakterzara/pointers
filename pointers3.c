#include<stdio.h>
void swap_int(int *a, int *b);
void swap_int(int *a, int *b){
   int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 3;
    int y = 8;

    printf("Before: x = %d, y = %d\n", x, y);
    swap_int(&x,&y);
    printf("After: x = %d, y = %d\n", x, y);

}