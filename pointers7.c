#include<stdio.h>
void increment(int *counter);
void increment(int *counter){
    (*counter)++;
}
int main(){
    int total = 0;
    int i;
    for(i=1;i<=6;i++){
        increment(&total);
    }
    printf("Sum = %d\n", total);

}