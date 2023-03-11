#include<stdio.h>

int main(){
    float a,b;
    char operation;
    printf("Enter 1st number =\t");
    scanf("%f" , &a);

    printf("Enter 2nd number =\t");
    scanf("%f" , &b);

    printf("Your choice +(1) , -(2) , *(3) , /(4)\t");
    scanf("%d" , &operation);
    
    switch(operation){
        case 1:
            printf("Your sum is %f" , a+b);
            break;
        case 2:
            printf("Your subtraction is %f" , a-b);
            break;
        case 3:
            printf("Your multiplication is %f" , a*b);
            break;
        case 4:
            printf("Your division is %f" , a/b); 
            break;
        default :
            printf("Your operation is not algebric");
     
    }
    return 0;
}