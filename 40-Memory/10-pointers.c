#include <stdio.h>

int main()
{
    // The concept of "string" does not actually exist in C. In C, a "string" is just an array of characters, and by array it means the characters are tightly stored together in memory.
    // To access the content of that character array, you use a POINTER to store the address of the start of the array.
    // The proper notations for assigning "string"'s are:
    char *s1 = "Hi"; // "Hi" means pack the characters 'H', 'i', '\0' together in memory. This epxression evalutes to the first character's address, which is assigned to the char pointer s1 (which points to 'H')
    s1 = "Hiiii";    // This can be reassigned

    char s2[] = "Hi"; // This is essentially the same! `s2` IS a pointer.
    // s2 = "Bye"; <-- Although be careful that this is ILLEGAL; Pointers declared with [] cannot be reassigned

    // When used as a storage of address, you can use pointers and the array notation in the same way, as the s[i] is converted to *(s + i) internally anyway
    printf("%s\n", s1);        // "Hi"; printf accepts a pointer, so any pointers will do. It will print all characters from that address until hitting '\0'
    printf("%c\n", s1[1]);     // "i"; you can use [] with pointers
    printf("%c\n", *(s2 + 1)); // "i"; you can use dereferencing with array name

    // There's a main difference between pointers and arrays though:
    // - When initialising with [] notation, you are allocating memory for the pointer itself AND the potential content of the array that it references
    char s3[] = "Hi"; // {} This has allocated 3 * 4 bytes of memory for 3, 4 and 5; the size is implied from the value on the RHS
    char s4[10];      // This has no array content yet, but memory of 10 * 4 bytes has been reserved for you. You can then do this safely:
    s4[0] = 'A';
    s4[1] = '\0';
    printf("%s\n", s4); // "A"
    // - When creating pointers, you only reserve memory for the pointer itself
    char *s5; // No memories for an array reserved
    // s5[0] = 'A';  <-- This will give you segmentation fault; You are accessing memories that are not reserved for you!
}