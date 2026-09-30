#include <stdio.h>

int main(void)
{
    int x = 2, y, z = 1, m;
    int a = 3, b = 4, c = 5;

    y = a * x * x + b * x + c;
    m = (x + y + z) / 3;

    printf("y=%d, m=%d\n", y, m);

    return 0;
}