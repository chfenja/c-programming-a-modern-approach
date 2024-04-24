#include <stdio.h>

int main(void)
{
        float user_amount, amount_with_tax;

        printf("Enter a dollars-and-cents amount: ");
        scanf("%f", &user_amount);

        amount_with_tax = user_amount * 1.05f;

        printf("Amount with tax added: %.2f\n", amount_with_tax);

        return 0;
}
