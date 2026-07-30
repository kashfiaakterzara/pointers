#include<stdio.h>
void checkDivisibilityBy3(int n, int *count);
void checkDivisibilityBy3(int n, int *count){
    if(n%3==0){
        (*count)++;
    }
}
int main(){
    int i, n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
      checkDivisibilityBy3(i,&count);
    }
    printf("Count = %d", count);
}