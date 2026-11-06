#include <stdio.h>

int main(void)
{
    int number = 2026;
    int digit_sum = 0;

    while (number > 0) {
        digit_sum = digit_sum + number % 10;

        number = number / 10;
    }

    printf("Digit sum: %d", digit_sum);

    return 0;
}
