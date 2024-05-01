#include <stdio.h>

int main(void)
{
        int num, tens;

        printf("Enter numerical grade: ");
        scanf("%d", &num);

        if (num < 0 || num > 100) {
                printf("Error: Not a valid grade\n");
                return 0;
        }

        tens = num / 10;

        switch (tens) {
        case 0: case 1: case 2: case 3: case 4: case 5:
                printf("Letter grade: F\n");
                break;
        case 6:
                printf("Letter grade: D\n");
                break;
        case 7:
                printf("Letter grade: C\n");
                break;
        case 8:
                printf("Letter grade: B\n");
                break;
        case 9: case 10:
                printf("Letter grade: A\n");
                break;
        }
        return 0;
}
