#include <stdio.h>

int main()
{
    char department;
    int semester;

    printf("Enter department (C for Computer Science, E for Electrical, B for Business): ");
    scanf(" %c", &department);

    printf("Enter semester (1, 2, or 3): ");
    scanf("%d", &semester);

    switch (department)
    {
        case 'C':
            switch (semester)
            {
                case 1:
                    printf("Core Course: Programming Fundamentals\n");
                    break;
                case 2:
                    printf("Core Course: Object Oriented Programming\n");
                    break;
                case 3:
                    printf("Core Course: Data Structures\n");
                    break;
                default:
                    printf("Invalid semester.\n");
            }
            break;

        case 'E':
            switch (semester)
            {
                case 1:
                    printf("Core Course: Circuit Analysis\n");
                    break;
                case 2:
                    printf("Core Course: Digital Logic Design\n");
                    break;
                case 3:
                    printf("Core Course: Electronics\n");
                    break;
                default:
                    printf("Invalid semester.\n");
            }
            break;

        case 'B':
            switch (semester)
            {
                case 1:
                    printf("Core Course: Principles of Management\n");
                    break;
                case 2:
                    printf("Core Course: Marketing\n");
                    break;
                case 3:
                    printf("Core Course: Financial Management\n");
                    break;
                default:
                    printf("Invalid semester.\n");
            }
            break;

        default:
            printf("Invalid department.\n");
    }

    return 0;
}                                                                                  

