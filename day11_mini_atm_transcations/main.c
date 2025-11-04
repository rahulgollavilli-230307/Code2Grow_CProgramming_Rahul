#include <stdio.h>

// Author: G. Rahul
// ID: AP25110090193
// Program: Simple Banking System

int main() {
    int choice, transactions = 0, max_transactions = 5;
    float balance = 10000.0, amount;

    printf("Welcome to the Banking System\n");

    do {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid amount. Please try again.\n");
            } else {
                balance += amount;
                printf("Amount deposited successfully.\n");
                printf("Updated balance: %.2f\n", balance);
            }
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid amount. Please try again.\n");
            } else if (amount > balance) {
                printf("Warning: Insufficient funds.\n");
            } else {
                balance -= amount;
                printf("Amount withdrawn successfully.\n");
                printf("Updated balance: %.2f\n", balance);
            }
        } else if (choice == 1) {
            printf("Your current balance is: %.2f\n", balance);
        } else if (choice == 4) {
            printf("Thank you for banking with us!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        if (choice >= 1 && choice <= 3) {
            transactions++;
        }

        if (transactions == max_transactions) {
            printf("Maximum transactions limit reached.\n");
            break;
        }

    } while (choice != 4);

    printf("\nTotal transactions: %d\n", transactions);
    printf("Final balance: %.2f\n", balance);

    return 0;
}
