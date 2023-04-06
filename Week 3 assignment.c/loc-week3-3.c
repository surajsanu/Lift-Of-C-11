#include <stdio.h>
int main()
{
    int a, b, *ptr_a, *ptr_b, sum;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    ptr_a = &a;
    ptr_b = &b;
    sum = *ptr_a + *ptr_b;
    printf("Sum of the numbers = %d\n", sum);
    return 0;
}