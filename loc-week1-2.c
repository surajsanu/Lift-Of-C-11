#include<stdio.h>

int main(){
    float n;
    printf("Enter your number =");
    scanf("%f" ,&n);

    if(n==0){
        printf("Your number is 0\n");
    }
    else if(n<0){
        printf("Your number is Negative\n");
    }
    else printf("Your number is Positive\n");
    return 0;
}