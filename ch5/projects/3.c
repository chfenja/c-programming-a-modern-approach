#include <stdio.h>

int main(void)
{
        float commission, price_per_share, value, rival_commission = 0.00f;
        int num_shares;

        printf("Enter the number of shares: ");
        scanf("%d", &num_shares);

        printf("Enter the price per share: ");
        scanf("%f", &price_per_share);

        value = num_shares * price_per_share;

        if (num_shares < 2000) {
                rival_commission = 33.00f + 0.03f * num_shares;
        } else if (num_shares > 2000) {
                rival_commission = 33.00f + 0.02f * num_shares;
        }

        if (value < 2500.00f)
                commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
                commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
                commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
                commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
                commission = 155.00f + .0011f * value;
        else
                commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
                commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
        printf("Rival Broker's commission: $%.2f\n", rival_commission);

        return 0;
}
