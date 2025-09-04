#include<stdio.h>
int main()
{
    int start, end, i;

    printf("enter the first number");
    scanf("%d", &start);
    printf("enter the second number");
    scanf("%d", &end);

    printf("result:\n");

    for (i = start; i<= end; i++)
    {
        if (i % 2 == 0) {

            printf("%d is even, square = %d\n", i, i * i);
        }
        else {
            printf("%d is odd, cube + %d\n",i, i * i * i);
        }
    }
    return 0;
}
