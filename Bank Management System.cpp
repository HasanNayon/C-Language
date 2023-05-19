#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CUSTOMERS 100

// Structure to hold customer information
struct Customer {
    int accountNumber;
    char name[100];
    float balance;
};

struct Customer customers[MAX_CUSTOMERS]; 
int numberOfCustomers = 0; 


void createAccount() {
    if (numberOfCustomers == MAX_CUSTOMERS) {
        printf("Maximum number of customers reached.\n");
        return;
    }

    struct Customer newCustomer;

    printf("Enter account number: ");
    scanf("%d", &newCustomer.accountNumber);

    printf("Enter customer name: ");
    scanf(" %[^\n]s", newCustomer.name);

    printf("Enter initial balance: ");
    scanf("%f", &newCustomer.balance);

    customers[numberOfCustomers++] = newCustomer;

    printf("Account created successfully.\n");
}


void deposit() {
    int accountNumber;
    float amount;
    int i;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (i = 0; i < numberOfCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);

            customers[i].balance += amount;

            printf("Deposit successful.\n");
            return;
        }
    }

    printf("Account not found.\n");
}


void withdraw() {
    int accountNumber;
    float amount;
    int i;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (i = 0; i < numberOfCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);

            if (customers[i].balance >= amount) {
                customers[i].balance -= amount;
                printf("Withdrawal successful.\n");
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }

    printf("Account not found.\n");
}


void checkBalance() {
    int accountNumber;
    int i;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    for (i = 0; i < numberOfCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            printf("Account Holder: %s\n", customers[i].name);
            printf("Account Balance: %.2f\n", customers[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}


void displayCustomers() {
    int i;

    if (numberOfCustomers == 0) {
        printf("No customers found.\n");
        return;
    }

    printf("Account Number\tCustomer Name\tBalance\n");

    for (i = 0; i < numberOfCustomers; i++) {
        printf("%d\t\t%s\t%.2f\n", customers[i].accountNumber, customers[i].name, customers[i].balance);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Customers\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayCustomers();
                break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
