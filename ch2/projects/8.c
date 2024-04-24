#include <stdio.h>

int main(void)
{
        float loan, interest_rate, monthly_payment, balance, monthly_interest_rate;

        printf("Enter amount of loan: ");
        scanf("%f", &loan);

        printf("Enter interest rate:  ");
        scanf("%f", &interest_rate);

        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);

        monthly_interest_rate = interest_rate / 100.0f / 12.0f;

        balance = loan;

        balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
        printf("Balance remaining after first payment: $%.2f\n", balance);

        balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
        printf("Balance remaining after second payment: $%.2f\n", balance);

        balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
        printf("Balance remaining after third payment: $%.2f\n", balance);

        return 0;
}
