#include<stdio.h>

int main(){
    int n,s=0;
    printf("Enter Your Integer =\t");
    scanf("%d" , &n);

    do{
        s+=(n%10);
        n/=10;
    } while(n>0);
    printf("Sum of digits in your number is = %d" , s);
    return 0;
}