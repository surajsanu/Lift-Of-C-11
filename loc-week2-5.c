#include <stdio.h>

int main(){
	int a[5]={6,7,8,4,5},n=5;
	int b[n],i;
	
	for (i=0; i<n; i++){
		b[i] = a[i];
	}
	
	printf("The 1st array is :\t");
	for (i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
  
	printf("\nThe 2nd array is :\t");
	for (i=0; i<n; i++){
		printf("%d ", b[i]);
	}
	return 0;
}