#include <stdio.h>

int main()
{
    int units;
    char type;
    float rate, bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter connection type (D for Domestic, C for Commercial): ");
    scanf(" %c", &type);

    if (type == 'D')
    {
        if (units <= 100)
        {
            rate = 10;
        }
        else
        {
            if (units <= 300)
            {
                rate = 15;
            }
            else
            {
                rate = 20;
            }
        }

        bill = units * rate;
    }
    else
    {
        if (type == 'C')
        {
            if (units <= 100)
            {
                rate = 15;
            }
            else
            {
                if (units <= 300)
                {
                    rate = 20;
                }
                else
                {
                    rate = 25;
                }
            }

            bill = units * rate;
        }
        else
        {
            printf("Invalid connection type.\n");
            return 0;
        }
    }

    printf("Total Bill = %.2f\n", bill);

    return 0;
}
