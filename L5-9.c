#include <stdio.h>

int main()
{
    char light, button;

    printf("Enter traffic light (R, Y, G): ");
    scanf(" %c", &light);

    switch (light)
    {
        case 'R':
            printf("Pedestrian button pressed? (Y/N): ");
            scanf(" %c", &button);

            switch (button)
            {
                case 'Y':
                    printf("Stop and allow pedestrians to cross.\n");
                    break;

                case 'N':
                    printf("Stop and wait.\n");
                    break;

                default:
                    printf("Invalid button choice.\n");
            }
            break;

        case 'Y':
            printf("Slow down and prepare to stop.\n");
            break;

        case 'G':
            printf("Pedestrian button pressed? (Y/N): ");
            scanf(" %c", &button);

            switch (button)
            {
                case 'Y':
                    printf("Go but watch for pedestrians.\n");
                    break;

                case 'N':
                    printf("Go.\n");
                    break;

                default:
                    printf("Invalid button choice.\n");
            }
            break;

        default:
            printf("Invalid traffic light.\n");
    }

    return 0;
}
