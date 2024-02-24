#include <cs50.h>
#include <stdio.h>

// main() actually has two arguments
// - `argc` is the argument count (`./helloworld Hello` count as *2* arguments, so this will always be >1)
// - `argv` is an *array of strings* of all the arguments passed in ("./helloworld", "Hello" in the exmaple above; note that string is actually char[] so it is char[][] =__=)
int main(int argc, string argv[])
{
    int i;
    printf("%i\n", argc); // 2

    for (i = 0; i < argc; ++i)
    {
        printf("%s\n", argv[i]); // "./helloworld", "Hello"
    }
}