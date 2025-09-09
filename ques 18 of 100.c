#include <stdio.h>
int main() {
    int percentage;

    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Enter between 0 and 100.\n");
    }
    else if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}

