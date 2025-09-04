#include<stdio.h>
int main()
{
    int n, a=0, b=1, next;

    printf("enter a number");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("%d is part of the fibonacci series.\n", n);
        return 0;
    }

    next = a+b;

    while (next <= n) {
        if (next == n) {
            printf("%d is part of the fibonacci series.\n", n);
            return 0;
        }

        a = b;
        b = next;
        next = a+b;
    }
     printf("%d is not part of the fibonacci series,\n",n);
     return 0;
}
