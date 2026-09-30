#include <stdio.h>

int main()
{
    char account, transaction;

    printf("1. Savings\n");
    printf("2. Current\n");

    printf("Enter account type: ");
    scanf(" %c", &account);

    switch (account)
    {
        case '1':
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");

            printf("Enter transaction: ");
            scanf(" %c", &transaction);

            switch (transaction)
            {
                case '1':
                    printf("Deposit performed for Savings Account.\n");
                    break;

                case '2':
                    printf("Withdrawal performed from Savings Account.\n");
                    break;

                case '3':
                    printf("Checking balance of Savings Account.\n");
                    break;

                default:
                    printf("Invalid transaction.\n");
            }
            break;

        case '2':
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");

            printf("Enter transaction: ");
            scanf(" %c", &transaction);

            switch (transaction)
            {
                case '1':
                    printf("Deposit performed for Current Account.\n");
                    break;

                case '2':
                    printf("Withdrawal performed from Current Account.\n");
                    break;

                case '3':
                    printf("Checking balance of Current Account.\n");
                    break;

                default:
                    printf("Invalid transaction.\n");
            }
            break;

        default:
            printf("Invalid account type.\n");
    }

    return 0;
}
