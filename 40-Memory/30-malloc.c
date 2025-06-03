#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Imagine you want to copy a char[] to another char[]. One of the way of doing so:
    char s[] = "Hi!";
    char t[4]; // I know that the string above only takes 4 char's, so I will reserve 4 slots; imagine if the char[] above is from user input, I will set a e.g. 1000 for this array as a maximum bound instead

    strcpy(t, s);
    printf("%s\n", t);

    // How about if I use pointers? Pointer declarations do not reserve memories for the array...

    char *u = "Bye!";
    char *v; // <-- I can't define the "size" of this!
    // Attempting to assign each character to this pointer's target will result in segmentation fault, because you haven't allocated memory yet
    // To solve this issue, you allocate memory manually:
    v = malloc(sizeof(char) * 5); // malloc returns you the address of the allocated memory, which we can assign to our pointer

    strcpy(v, u); // This then assign VALUES to the allocated memory
    printf("%s\n", v);

    // !!! If anything goes wrong, e.g. there's not enough memory in the system to assign the array, malloc (and any get_* functions from cs50.h) will return you the NULL pointer, which you can check by somthing like `if (malloc(1e16) == NULL) return 1`. NULL is essentially the `0` address, which is guaranteed by C to never be a valid address for any values.

    // When you manually allocate memory with malloc, you also have to free the memory manually, so it does not have memory leak (i.e. using memory but made it inaccesible later)
    free(v);

    // To help debugging memory leaks, you may want to do use like Valgrind: https://valgrind.org
}