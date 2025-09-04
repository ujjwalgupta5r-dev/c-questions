#include<stdio.h>
int main()
{
    int choice;
    char cont = 'y';
    int votesA = 0, votesB = 0, votesC = 0;

    printf("voting system\n");

    printf("candidates\n");
    printf("1. candidateA\n");
    printf("2. candidateB\n");
    printf("3. candidateC\n");

    while (cont == 'y' || cont == 'Y') {
        printf("enter your vote (1/2/3):");
        scanf("%d", &coice);

        if (choice == 1) {
            votesA++;
        }
        else if (choice == 2) {
            votesB++;
        }
        else if (choice == 3) {
            votesC++;
        }
        else {
            printf("invalid vote! please choose between 1, 2, or 3.\n");
        }

        printf("do you want to continue voting? (y/n):");
        scanf("%c", &cont);
        
    

    printf("voting fininshed?!\n");
    printf("results:\n");
    printf("canidate A: %d votes\n", votesA);
    printf("candidate B: %d votes\n", votesB);
    printf("candidate C: %d votes\n", votesC);

    if (votesA > votesB && votesA > votesC) {
        printf("winner: candidateA\n")
    }
    else if (votesB > votesA && votesB > votesC) {
        printf("winner: candidateB\n");
    }
    else if (votesC > votesA && votesC > votesB) {
        printf("winner: candidatec\n");
    }
    else 
        printf("it's a tie\n");
    }
    return 0;
}
