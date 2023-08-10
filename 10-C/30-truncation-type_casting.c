#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 3;
    // This won't work: the number is already truncated to int when `x / y` is performed
    float z = x / y; // The result will be 0
    // Instead, you need to cast x and y so the compiler knows to convert it to a float first
    float w = (float)x / (float)y;
    printf("%f\n", w);
}