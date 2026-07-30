#include<stdio.h>
void check_score(int score, int *pass);
void check_score(int score, int *pass){
    *pass=(score>=60);
}
int main(){
    int score, pass;
    printf("Enter score: ");
    scanf("%d", &score);
    check_score(score,&pass);
    if(pass){
        printf("Passed!");
    }
    else{
        printf("Fail");
    }

}