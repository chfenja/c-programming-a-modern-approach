#include <stdio.h>


int main(void)
{
        int num, d0, d1, d2, d3, d4;

        printf("Enter a number between 0 and 32767: ");
        scanf("%d", &num);

        d4 = num % 8;
        num /= 8;

        d3 = num % 8;
        num /= 8;

        d2 = num % 8;
        num /= 8;

        d1 = num % 8;
        num /= 8;

        d0 = num % 8;

        printf("In octal, your number is: %d%d%d%d%d\n", d0, d1, d2, d3, d4);

        return 0;
}
