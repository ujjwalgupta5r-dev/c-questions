#include<stdio.h>
int main(){
	int i , n ;
	printf("enter the size of an array: ");
	scanf("%d" , &n );
	
	int arr[n];
	
	printf("enter %d numbers : ");
	for (i = 0 ; i < n  ; i++){
		scanf("%d" , &arr[i]);
	}
	
	printf("enter numbers in reverse order: ");
	for (i = n - 1 ; i >= 0 ; i--){
		printf("%d" , arr[i]);
	}
	return 0;
	
}
