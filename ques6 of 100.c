#include<stdio.h>
int main (){
int a,b,temp;
printf("enter first number: ");
scanf("%d" , &a);
printf("enter second number: ");
scanf("%d" , &b);
	
printf("before swapping: a = %d , b = %d" , a , b);

temp = a;
a = b;
b = temp;

printf("after swapping: a = %d , b = %d" , a , b);
return 0;
}
