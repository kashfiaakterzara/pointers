#include<stdio.h>
void sum(int n, int *total);
void sum(int n, int *total){
 *total = n + *total;

}

int main(){
    int n, i, total = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum(i,&total);

    }
    printf("Total = %d", total);
    
}