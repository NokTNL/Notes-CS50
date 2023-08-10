// Input is a bit tricky in C. Use cs50.h for that purpose for now: https://github.com/cs50/libcs50
// NOTE: cs50.h does not seems to work properly with gcc. It will throw this error:
//      `Undefined symbols for architecture x86_64`
// - To solve that, create a Makefile in the same directory you run `make`, according to this comment: https://github.com/cs50/libcs50/issues/212#issuecomment-968076759
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Note: `string` is NOT a standard type in C. It is from cs50.h
    string answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer); // %s is a 'placeholder' for dynamic string value
    // To escape `%`, use `%%`
}
