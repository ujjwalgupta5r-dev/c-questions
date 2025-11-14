#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    int choice, quantity, n;
    float price, total = 0, tax, grandTotal;
    static int orderID = 1000; 

    printf("===== Welcome to Shopping System =====\n");

    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);


    if (strcmp(username, "user") != 0 || strcmp(password, "123") != 0) {
        printf("Invalid username or password.\n");
        return 0;
    }

    printf("\nLogin Successful.\n");

 
    printf("\n===== Product Catalog =====\n");
    printf("1. Apple   - Rs.50\n");
    printf("2. Banana  - Rs.10\n");
    printf("3. Mango   - Rs.60\n");
    printf("4. Milk    - Rs.30\n");

    printf("\nEnter number of products you want to buy: ");
    scanf("%d", &n);

   
    printf("\nItem\t\tQuantity\tAmount\n");

   
    for (int i = 1; i <= n; i++) {
        printf("\nSelect product (1-4): ");
        scanf("%d", &choice);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (choice == 1) {
            price = 50 * quantity;
            printf("Apple\t\t%d\t\t%.2f\n", quantity, price);
        }
        else if (choice == 2) {
            price = 10 * quantity;
            printf("Banana\t\t%d\t\t%.2f\n", quantity, price);
        }
        else if (choice == 3) {
            price = 60 * quantity;
            printf("Mango\t\t%d\t\t%.2f\n", quantity, price);
        }
        else if (choice == 4) {
            price = 30 * quantity;
            printf("Milk\t\t%d\t\t%.2f\n", quantity, price);
        }
        else {
            printf("Invalid choice.\n");
            price = 0;
        }

        total += price;
    }

 
    tax = total * 0.07;
    grandTotal = total + tax;
    orderID++; 

   
    printf("\n===== Final Bill =====\n");
    printf("Order ID: %d\n", orderID);
    printf("Total Amount: Rs. %.2f\n", total);
    printf("Tax (7%%): Rs. %.2f\n", tax);
    printf("Grand Total: Rs. %.2f\n", grandTotal);

    printf("\nThank you for shopping with us.\n");

    return 0;
}
