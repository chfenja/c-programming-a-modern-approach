#include <stdio.h>

int main(void)
{
        int speed;

        printf("Enter the speed of wind in knots: ");
        scanf("%d", &speed);

        if (speed > 63) {
                printf("Hurricane\n");
        } else if (speed >= 48) {
                printf("Storm\n");
        } else if (speed >= 28) {
                printf("Gale\n");
        } else if (speed >= 4) {
                printf("Breeze\n");
        } else if (speed >= 1) {
                printf("Light air\n");
        } else if (speed < 1) {
                printf("Calm\n");
        }

        return 0;
}
