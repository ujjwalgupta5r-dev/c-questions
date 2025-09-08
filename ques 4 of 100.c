#include<stdio.h>
int main(){
float area , circumference , radius ;
printf("enter radius: ");
scanf("%d" , &radius);

area = 3.14 * radius * radius ;
circumference = 2 * 3.14 * radius ;

printf("%d" , area);
printf("%d" , circumference);

return 0 ;
}


