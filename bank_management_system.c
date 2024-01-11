#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

// Structure to represent a bank account
struct BankAccount
{
    char accountHolder[100];
    int accountNumber[100];
    float balance;
};

void createAccount(struct BankAccount accounts[], int *numAccounts);
void deposit(struct BankAccount accounts[], int numAccounts, int accountNumber, float amount);
void withdraw(struct BankAccount accounts[], int numAccounts, int accountNumber, float amount);
void checkBalance(const struct BankAccount accounts[], int numAccounts, int accountNumber);

int main()
{
    struct BankAccount accounts[MAX_ACCOUNTS];
    int numAccounts = 0;
    int choice;
    int accountNumber;
    float amount;

    do
    {
        printf("\nBank Management System\n");
        printf("1. Create a New Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount(accounts, &numAccounts);
            break;

        case 2:
            printf("Enter account number for deposit: ");
            scanf("%d", &accountNumber);
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
                deposit(accounts, numAccounts, accountNumber, amount);
            break;

        case 3:
            printf("Enter account number for withdrawal: ");
            scanf("%d", &accountNumber);
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
                withdraw(accounts, numAccounts, accountNumber, amount);
            break;

        case 4:
            printf("Enter account number to check balance: ");
            scanf("%d", &accountNumber);
            checkBalance(accounts, numAccounts, accountNumber);
            break;

        case 5:
            printf("Exiting the program. Thank you!\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);
}
// Function to create a new bank account
void createAccount(struct BankAccount accounts[], int *numAccounts)
{
    if (*numAccounts < MAX_ACCOUNTS)
    {
        printf("Enter account holder name: ");
        scanf(" %[^\n]", accounts[*numAccounts].accountHolder);

        printf("Enter account number: ");
        scanf("%d", &accounts[*numAccounts].accountNumber);

        accounts[*numAccounts].balance = 0.0;
        (*numAccounts)++;
        printf("Account created successfully.\n");
    }
    else
    {
        printf("cannot create more accounts.  Maximum limit reached.\n");
    }
}

// Function to perform a deposit into a bank account
void deposit(struct BankAccount accounts[], int numAccounts, int accountNumber, float amount)
{
    for (int i = 0; i < numAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found. Deposit failed.\n");
}

// Function to perform a withdrawal from a bankaccount
void withdraw(struct BankAccount accounts[], int numAccounts, int accountNumber, float amount)
{
    for (int i = 0; i < numAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            if (amount <= accounts[i].balance)
            {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            }
            else
            {
                printf("Insufficient funds. Withdrawal failed.\n");
            }
            return;
        }
    }
    printf("Account not found. Withdrawal failed.\n");
}

void checkBalance(const struct BankAccount accounts[], int numAccounts, int accountNumber)
{
    for (int i = 0; i < numAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            printf("Account Holder: %s\nAccount Number: %d\nBalance: %.2f\n", accounts[i].accountHolder, accounts[i].accountNumber, accounts[i].balance);
            return;
        }
    }
    printf("Account not found. Unable to check balance.\n");
}