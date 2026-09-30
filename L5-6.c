#include <stdio.h>
#include <math.h>

int main()
{
    char mode, op;
    float a, b, result;

    printf("Enter mode (1 for Basic Arithmetic, 2 for Power/Root): ");
    scanf(" %c", &mode);

    switch (mode)
    {
        case '1':
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);

            switch (op)
            {
                case '+':
                    result = a + b;
                    printf("Result = %.2f\n", result);
                    break;

                case '-':
                    result = a - b;
                    printf("Result = %.2f\n", result);
                    break;

                case '*':
                    result = a * b;
                    printf("Result = %.2f\n", result);
                    break;

                case '/':
                    if (b != 0)
                    {
                        result = a / b;
                        printf("Result = %.2f\n", result);
                    }
                    else
                    {
                        printf("Cannot divide by zero.\n");
                    }
                    break;

                default:
                    printf("Invalid operator.\n");
            }
            break;

        case '2':
            printf("Enter a number: ");
            scanf("%f", &a);

            printf("Enter operation (s for square, r for square root): ");
            scanf(" %c", &op);

            switch (op)
            {
                case 's':
                    printf("Square = %.2f\n", a * a);
                    break;

                case 'r':
                    if (a >= 0)
                    {
                        printf("Square Root = %.2f\n", sqrt(a));
                    }
                    else
                    {
                        printf("Square root not possible.\n");
                    }
                    break;

                default:
                    printf("Invalid operation.\n");
            }
            break;

        default:
            printf("Invalid mode.\n");
    }

    return 0;
}
