#include <stdio.h>

int main(void)
{
    unsigned int x;
    int b;

    printf("Input a number: ");
    if (scanf("%u", &x) != 1) {
        return 1;
    }

    for (b = 0; x != 0; x >>= 1) {
        if (x & 1) {
            b++;
        }
    }

    printf("The result is: %d\n", b);

    return 0;
}