#include<stdio.h>
int main(){
	float principal , rate , time ;
	float simpleinterest , compoundinterest , amount ;
	
	printf("enter principal value: ");
	scanf("%f" , &principal);
	printf("enter rate  value: ");
	scanf("%f" , &rate );
	printf("enter time value: ");
	scanf("%f" , &time );
	
	simpleinterest = (principal * rate * time) / 100 ;
	amount = principal * ( 1 + rate / 100) * ( 1 + rate / 100)	;
	compoundinterest = amount - principal ;
	
	printf("%f" , simpleinterest);
	printf("%f" , compoundinterest);
	
	return 0;
	
}
