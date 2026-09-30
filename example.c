#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input two integers: ");
    if (scanf("%i %i", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("+ result is %d\n", a + b);
    printf("- result is %d\n", a - b);
    printf("* result is %d\n", a * b);

    if (b != 0) {
        printf("/ result is %d\n", a / b);
        printf("%% result is %d\n", a % b);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}