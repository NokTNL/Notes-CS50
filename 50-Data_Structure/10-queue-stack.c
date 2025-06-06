#include <cs50.h>

typedef struct {
    int id;
    string name;
} person;

/**
 * Abstract data structure: helps us to manage data more efficiently
 */

/** 
 * Queues: first in, first out
 */
// You can enqueque (push item into the queue) and dequeque (push item out the queue)
#define QUEUE_CAPACITY 50
typedef struct
{
    person people[QUEUE_CAPACITY];
    int size; // Keeping track of the size of the queue
} queue;

/**
 * Stacks: last in, first out
 */
// You can push (add items to the top) and pop (take last item out from the top)
// Struct is similar to queues, but code will be different for its operations
