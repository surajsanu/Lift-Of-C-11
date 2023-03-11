#include<stdio.h>

int main(){
    float r;
    printf("Enter radius of circle =\t");
    scanf("%f" , &r);

    printf("Diameter of circle is %f\n" , r*2);
    printf("Circumference of circle is %f\n" , r*3.14*2);
    printf("Area of circle is %f\n" , r*r*3.14);
    return 0;
}