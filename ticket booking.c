#include <stdio.h>

int main() {
    int choice, tickets, totalTickets = 0;
    float totalCost = 0;
    
    const int PREMIUM = 200;
    const int STANDARD = 150;
    const int ECONOMY = 100;

    while (1) {
        printf("Cinema Ticket Booking System");
        printf("1. Premium Seat = Rs.%d", PREMIUM);
        printf("2. Standard Seat = Rs.%d", STANDARD);
        printf("3. Economy Seat = Rs.%d", ECONOMY);
        printf("4. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            break;
        }

        printf("How many tickets? ");
        scanf("%d", &tickets);

   
        totalTickets += tickets;

        switch (choice) {
            case 1:
                totalCost += PREMIUM * tickets;
                break;
            case 2:
                totalCost += STANDARD * tickets;
                break;
            case 3:
                totalCost += ECONOMY * tickets;
                break;
			     
        }
    }

    if (totalTickets >= 5) {
        totalCost *= 0.95;  // 5% discount
        printf("Discount applied (5%% off for 5 or more tickets)");
    }

    printf("Total tickets booked: %d", totalTickets);
    printf("Final Bill: Rs.%.2f", totalCost);

    return 0;
}

