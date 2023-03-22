#include <stdio.h>
int main()
{
    int x, i, j, temp;
    printf("Enter the size of the array:\t");
    scanf("%d", &x);
    int arr[x];
    
    printf("Enter positive and negative integers:\t");
    for (i=0; i<x; i++)
    {
        scanf("%d", &arr[i]);
    }
    j=0;
    
    for (i=0; i<x; i++)
    {
     if (arr[i]<0)
    {
     if (i!=j)
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
    j++;
    }
    }
     printf("The modified array is ");

   for (i=0; i<x; i++)
  {
   printf("%d ", arr[i]);
  }
   return 0;
}