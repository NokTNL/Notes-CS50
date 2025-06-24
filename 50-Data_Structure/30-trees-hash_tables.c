#include <cs50.h>
/**
 * Binary search trees (DS)
 */
// A major limitation of linked list is that it is very hard to get to te middle of it.
// A binary search trees solves this problem, making it more suitable for common operations, like binary search (which is of O(log n)).
// It starts from the MIDDLE of your series of item, *left is pointing to a smaller value while *right is bigger
typedef struct tree_node
{
    int number;
    struct tree_node *left;
    struct tree_node *right;
} tree_node;

// The problem of this structure is that it is difficult to make it follow the correct sort order when building it while still mainiting a balanced tree structure

/**
 * Dictionaries (abstract DS) & hash tables (DS)
 */
// From a dictionary, you can get a value from a key. Searching this will be of O(1) which is very desirable
// We could achieve that using a hash table
// We first need a HASH FUNCTION, which reduces a big value to a small value we use as a "shortcut".
//   - This could be e.g. taking the first letter of a string.
// Then we can have an array of hashes which includes everything that could be produced from the hash function. These are called BUCKETS.
//   - In our example, this will be the array of the 26 alphabets
// When adding a new item, we point the relevant hash bucket to the new value

// Simplest implementation will be an array (i.e. indexable by hash), each pointing to a value
string *table[26];

// !! We need to deal with HASH COLLISION, when values have the same hash.
// - In our example, a lot of words start with the same letter
// This can be solved by making the buckets point to a linked list. When collision happens, append to the linked list
// Worse case will be that all entries have the same hash, which makes a search algorithm of O(n)
typedef struct hash_node {
    string value;
    struct hash_node *next;
} hash_node;
hash_node *table_with_linked_list[26];
// Also, choose a better hashing algorithm with a longer list of possible hash will reduce the chance of collision