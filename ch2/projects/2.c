#include <stdio.h>

#define PI 3.14f


int main(void)
{
        float volume, radius = 10.0;

        volume = (4.0f / 3.0f) * PI * radius * radius * radius;

        printf("The volume of the sphere: %.2f\n", volume);

        return 0;
}
