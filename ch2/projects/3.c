#include <stdio.h>

#define PI 3.14f


int main(void)
{
        float volume, radius;

        printf("Enter radius in meters: ");
        scanf("%f", &radius);

        volume = (4.0f / 3.0f) * PI * radius * radius * radius;

        printf("The volume of the sphere: %.2f\n", volume);

        return 0;
}
