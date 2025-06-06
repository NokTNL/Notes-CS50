#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
/**
 * Linked lists
 */
// Normally you need to know in advance how much memory is needed for an array, otherwise you may access unauthorized memory and causes segmentation fault
// Linked lists solve this issue. Here is a linked list node for integer values:
typedef struct node /* Need defining `node` first before using it inside itself */
{
    int number;
    struct node *next; // Pointing to the address of the next node; Need the `struct` keyword because it is pointing to itself
} node;

int main()
{
    // NOTE: this builds the linked list BACKWARDS, i.e. the last element comes out first

    // This stores the address of the whole list
    node *list = NULL;
    node *n;

    int i;
    for (i = 0; i < 3; ++i)
    {
        n = malloc(sizeof(node));
        n->number = get_int("Input your next number: "); // n->number is short for `(*n).number`
        n->next = list;
        list = n;
    }

    // Printing the linked list, for latest to oldest
    n = list;
    while (n != NULL)
    {
        printf("Printing: %i\n", n->number);
        n = n->next;
    }
}