#include<stdio.h>
int main()
{
    int num,i,prime = 0;

    printf("enter a number");
    scanf("%d", &num);

    if (num<=1) {
        printf("%d is not a prime number.\n",num);
    }
    else {
        for (i=2; i < num; i++) {
            if (num % i == 0) {
                prime = 1;
            }

    
        }

        if (prime == 0) {
            printf("%d is a prime number.\n", num);
        }
        else{
            printf("%d is not a prime number.\n", num);
        }
    }
    return 0;

}
