#include<stdio.h>
int main()
{
    int num, factorial=1;
    printf("enter a number to find out its factorial");
    scanf("%d", &num);
    if (num<0){
        printf("factorial cannot be find out since the number is negative");
    }
    else{
        int i=1;
        while(i<=num){
            factorial *= i;
            i++;
        }
        printf("factorial of %d is %d\n", num, factorial);
    }
    return 0;
}
