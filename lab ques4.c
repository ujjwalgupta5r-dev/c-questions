#include<stdio.h>
int main(){
	int arr[10] , i , num , found = 0 ; 
	
	printf("enter 10 numbers : ");
	for (i = 0 ; i < 10 ; i++){
	scanf("%d" , &arr[i]);
}
printf("enter a number to search: ");
scanf("%d" , &num);

for(i = 0; i < 10; i++) {
	if(arr[i] == num)
	{
	
	printf("number found at position is %d" , i + 1 );
	found = 1;
	break;
}
}

return 0;
}
