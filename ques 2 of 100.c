#include<stdio.h>
int main(){
int a,b ;
printf("enter first number: ");
scanf("%d" , &a);
printf("enter second number: ");
scanf("%d" , &b);
printf("sum = %d", a +b);
printf("diff = %d" , a - b);
printf("product = %d" , a * b);
if (b != 0){
	printf("quotient = %d", a / b);
}
else {
	printf( "quotient is undefined");
}
return 0;
}
