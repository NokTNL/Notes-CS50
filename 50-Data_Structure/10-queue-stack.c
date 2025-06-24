#include <cs50.h>

typedef struct {
    int id;
    string name;
} person;

/**
 * Data structures & Abstract data structures
 */
// Data structures are ways of organising data in our memory, e.g. arrays, structs, and things built from these two
// Abstract data structures mental constructs of how to organise data, which needs to be implemented by actual data structures, e.g. linked list

/** 
 * Queues (abstract DS): first in, first out
 */
// You can enqueque (push item into the queue) and dequeque (push item out the queue)
// Example implementations, using an array:
#define QUEUE_CAPACITY 50
typedef struct
{
    person people[QUEUE_CAPACITY];
    int size; // Keeping track of the size of the queue
} queue;
// ... and some functions to manage adding/removing items

/**
 * Stacks (abstract DS): last in, first out
 */
// You can push (add items to the top) and pop (take last item out from the top)
// Struct is similar to queues, but code will be different for its operations
// Implementation is EXACTLY THE SAME as Queues, but the functions of adding/removing items are different
