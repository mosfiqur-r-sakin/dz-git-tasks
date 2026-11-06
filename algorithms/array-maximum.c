#include <stdio.h>

int main(void)
{
    int array[] = {3, 17, 8, 5, 42};
    int size = 5;
    int maximum = array[0];

   for (int i = 0; i < size; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }

    printf("Maximum: %d", maximum);

    return 0;
}
