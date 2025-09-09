#include<stdio.h>
int main(){
	int percentage;
	printf("enter your percentage: ");
	scanf("%d" , &percentage);
	
	if (percentage >= 90 || percentage <= 100) {
		printf("grade A");
	}
	else if (percentage >= 80) {
		printf("grade B");
	}
	else if (percentage >= 70) {
		printf("grade C");
	}
	else if (percentage >= 60) {
		printf("grade D");
	}
	else {
		printf("grade F");
	}
	return 0;
}
