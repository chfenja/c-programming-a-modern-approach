// this is a terrible solution but correct nonetheless.

#include <stdio.h>

int main(void)
{
        int hours, minutes;

        printf("Enter a 24-hour time: ");
        scanf("%d:%d", &hours, &minutes);

        if (hours == 0) {
                printf("Equivalent 12-hour time: %d:%d AM\n", hours + 12, minutes);
        } else if (hours == 12) {
                printf("Equivalent 12-hour time: %d:%d PM\n", hours, minutes);
        } else if (hours < 12) {
                printf("Equivalent 12-hour time: %d:%d AM\n", hours, minutes);
        } else if (hours > 12) {
                printf("Equivalent 12-hour time: %d:%d PM\n", hours , minutes);
        }


        return 0;
}
