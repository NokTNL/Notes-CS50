#include <stdio.h>

int main()
{
    // Arrays are values that tightly packed together in memory.
    // You can initialise arrays in the following ways:
    int num1[10]; // Initialising an array of size 10 (10 int's packed togther tightly)
    num1[0] = 10;
    num1[1] = 11;
    // Or:
    int num2[] = {1, 2, 3}; // This is called "aggregate initialisation" of array, which creates the array AND assign values in bulk; The size will be determined for you automatically
    // !!! This notation {} cannot be used elsewhere other than initialisation
    // num2 = {1, 2, 3}; <-- Syntax error
}