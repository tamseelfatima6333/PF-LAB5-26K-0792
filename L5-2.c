#include <stdio.h>

int main()
{
    int age;
    char day;
    float discountWeekday, discountWeekend;
    float regularWeekday, regularWeekend;
    float price;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter day (W for weekday, H for weekend/holiday): ");
    scanf(" %c", &day);

    printf("Enter discounted weekday price: ");
    scanf("%f", &discountWeekday);

    printf("Enter discounted weekend price: ");
    scanf("%f", &discountWeekend);

    printf("Enter regular weekday price: ");
    scanf("%f", &regularWeekday);

    printf("Enter regular weekend price: ");
    scanf("%f", &regularWeekend);

    if (age < 12 || age > 60)
    {
        if (day == 'W')
        {
            price = discountWeekday;
        }
        else
        {
            if (day == 'H')
            {
                price = discountWeekend;
            }
            else
            {
                printf("Invalid day.\n");
                return 0;
            }
        }
    }
    else
    {
        if (day == 'W')
        {
            price = regularWeekday;
        }
        else
        {
            if (day == 'H')
            {
                price = regularWeekend;
            }
            else
            {
                printf("Invalid day.\n");
                return 0;
            }
        }
    }

    printf("Final Ticket Price = %.2f\n", price);

    return 0;
}
