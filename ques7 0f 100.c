#include<stdio.h>
int main(){

int a,b ;
printf("enter first number: ");
scanf("%d" , &a);
printf("enter second number: ");
scanf("%d" , &b);

printf("before swapping: a = %d , b = %d ", a,b);

a = a + b;
a = a - b;
b = a - b;

printf("after swapping: a = %d , b = %d " , a ,b);

return 0 ;
}
