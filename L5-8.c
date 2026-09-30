#include <stdio.h>

int main()
{
    int category, item;

    printf("1. Beverages\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");

    printf("Enter category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1. Tea\n");
            printf("2. Coffee\n");
            printf("3. Juice\n");

            printf("Choose item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("Tea - Rs. 100\n");
                    break;
                case 2:
                    printf("Coffee - Rs. 200\n");
                    break;
                case 3:
                    printf("Juice - Rs. 250\n");
                    break;
                default:
                    printf("Invalid item.\n");
            }
            break;

        case 2:
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Pasta\n");

            printf("Choose item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("Burger - Rs. 500\n");
                    break;
                case 2:
                    printf("Pizza - Rs. 800\n");
                    break;
                case 3:
                    printf("Pasta - Rs. 600\n");
                    break;
                default:
                    printf("Invalid item.\n");
            }
            break;

        case 3:
            printf("1. Ice Cream\n");
            printf("2. Cake \n");
            printf("3. Brownie\n");

            printf("Choose item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("Ice Cream - Rs. 200\n");
                    break;
                case 2:
                    printf("Cake - Rs. 300\n");
                    break;
                case 3:
                    printf("Brownie - Rs. 250\n");
                    break;
                default:
                    printf("Invalid item.\n");
            }
            break;

        default:
            printf("Invalid category.\n");
    }

    return 0;
}
