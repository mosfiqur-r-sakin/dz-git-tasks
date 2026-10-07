#include <stdio.h>

int main(void)
{
    double celsius[] = {0.0, 36.6, 100.0};
    int count = 3;

    for (int i = 0; i < count; i++) {
        double fahrenheit;

        fahrenheit = celsius[i] * 9.0 / 5.0 - 32.0;

        printf("%.1f C = %.2f F", celsius[i], fahrenheit);
    }

    return 0;
}
