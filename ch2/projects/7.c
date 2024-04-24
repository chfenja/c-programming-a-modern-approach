#include <stdio.h>

int main(void)
{
        int original_amount, twenties, tens, fives, ones;

        printf("Enter a dollar amount: ");
        scanf("%d", &original_amount);

        twenties = original_amount / 20;

        tens = (original_amount - (twenties * 20)) / 10;

        fives = (original_amount - (twenties * 20) - (tens * 10)) / 5;

        ones = original_amount - (twenties * 20) - (tens * 10) - (fives * 5);

        printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",
               twenties, tens, fives, ones);

        return 0;
}
