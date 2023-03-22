#include<stdio.h>
int main()
{
    int size,i, j,count=0,maxcount=0,maxelement,occurrence;           
    printf("Enter the number of elements :\t");
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size; i++){
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++){
        count = 1;
        for(j=i+1; j<size; j++){
            if(arr[j]==arr[i]){
                count++;
                if(count>maxcount){
                    maxelement=arr[j];
                    maxcount=count;
                }
            }
        }
    }
    printf("Maximum Frequency Element : %d, Occurrence= %d times",maxelement,maxcount);
    return 0;
}