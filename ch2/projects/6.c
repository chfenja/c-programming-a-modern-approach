#include <stdio.h>

int main(void)
{
        int x, polynomial;

        printf("Enter the value of x: ");
        scanf("%d", &x);

        polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

        printf("The result of the polynomial: %d\n", polynomial);

        return 0;
}
