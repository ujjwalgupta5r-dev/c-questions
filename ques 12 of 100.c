#include<stdio.h>
int main(){
	int num;
	printf("enter an integer: ");
	scanf("%d" , &num);
	
	if (num >= 0 ){
		if (num == 0 )
		printf("zero");
		else 
		printf("positive");
		}
		else {
			printf("negative");
		}
		
		return 0;
}
