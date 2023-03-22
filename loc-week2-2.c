#include <stdio.h>
int main(){
    int arr1[50], arr2[50], merged[100];
    int n1, n2, x, y;
    
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for (x=0; x<n1;x++){
        scanf("%d", &arr1[x]);
    }
    
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for (x=0; x<n2; x++){
        scanf("%d", &arr2[x]);
    }
    
    for (x=0; x<n1; x++){
        merged[x] = arr1[x];
    }
    for (y=0; y<n2; y++){
        merged[x] = arr2[y];
        x++;
    }
  
    printf("Merged array in reverse order: ");
    for (x=n1+n2-1; x>=0; x--){
        printf("%d ", merged[x]);
    }
    printf("\n");
    return 0;
}