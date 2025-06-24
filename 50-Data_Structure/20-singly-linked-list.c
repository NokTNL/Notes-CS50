#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
/**
 * Singly linked lists (DS)
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
        if (n == NULL)
        {
            // If it fails, you should free the memories here like at the end of program as well
            return 1;
        }
        n->number = get_int("Input your next number: "); // n->number is short for `(*n).number`
        n->next = list;
        list = n;
    }

    // Printing the linked list, for latest to oldest
    for (n = list; n != NULL; n = n->next)
    {
        printf("Printing: %i\n", n->number);
    }

    // Free memories for malloc
    for (n = list->next; list != NULL; list = n)
    {
        free(list);
    }
}

/**
 * Complexity analysis
 */
// - For searching an element inside the list: O(n) (potentially searching the whole thing)
//   - This compares to O(1) for retrieving array element by simply providing an index, as arrays are tightly packed together
// - For adding one new element at the end: O(1) (i.e. constant)
//   - This compares to O(n) for arrays, because you will possibly need to copy the whole array to the new address

// ** If we want to make it first-in-first-out (FIFO), then we will need to find the end of the list every single time before we append a new element. This makes adding a new element an O(n) process.

/**
 * Doubly linked list (DS)
 */
// If we want to allow the list to move & extend in both direction, we can simply add an extra `prev` node to the linked list node.