// gcc -o see -O -Wall -Wextra -pedantic -std=c99 -g 1.c && ./see

#include <stdio.h>


int main(void)
{
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) {
                printf("Not a positive number\n");
        } else if (num < 9) {
                printf("The number %d has a single digit\n", num);
        } else if (num < 99) {
                printf("The number %d has 2 digits\n", num);
        } else if (num < 999) {
                printf("The number %d has 3 digits\n", num);
        } else if (num < 9999) {
                printf("The number %d has 4 digits\n", num);
        } else
                printf("Not a valid number\n");

        return 0;
}
