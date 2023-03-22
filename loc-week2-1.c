#include <stdio.h>
int countoccurance(int arr[], int n, int num);
int main()
{
    int arr[] = {6,2,5,7,8,6,4,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 6; 
    int count = countoccurance(arr, n, num);
    printf("The number of occurrences of %d in the array is %d\n", num, count);
    return 0;
}
int countoccurance(int arr[], int n, int num)
{
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}