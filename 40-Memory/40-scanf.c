#include <stdio.h>

int main()
{
    /*
     * Standard I/O (command line)
     */
    // This is how you get a formatted value from command line:
    int input_num;
    printf("Type a number: ");
    // scanf's first argument is the format you expect, and second the address you want to store it at.
    scanf("%i", &input_num);
    printf("You typed: %i\n", input_num);

    // strings can be trickier because you never know the length of user input in advance, You will need to malloc again and again until you hit the end of the user input
}