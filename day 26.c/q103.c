#include <stdio.h>

int main() {
    int pin = 1234, userpin;
    int choice;
    float balance = 10000, amount;

printf("Enter PIN: ");
    scanf("%d", &userpin);

    if (userpin != pin) {
        printf("Invalid PIN");
        return 0;
    }

    do {
    printf("\n\n===== ATM MENU =====");
      printf("\n1. Check Balance");
     printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance = %.2f", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Updated Balance = %.2f", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash.");
                    printf("\nRemaining Balance = %.2f", balance);
                } else {
                    printf("Insufficient Balance!");
                }
                break;

            case 4:
                printf("Thank you for using our ATM.");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while (choice != 4);

    return 0;
}