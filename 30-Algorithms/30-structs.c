#include <cs50.h>
#include <stdio.h>

// If you want to define your own type, you can use `typedef`
//      v telling the compiler that your typedef's type; here we want a *struct*, i.e. multiple types bound together
typedef struct
{
    string name;
    string number;
} person;
// ^^ name of the new type

int main()
{
    int i;
    // Use your typedef like normal types; here we make a struct array, each item will have two attributes
    person phonebook[3];

    // To retreive/edit values in a struct, you use the *dot notation*
    phonebook[0].name = "A";
    phonebook[0].number = "12345678";

    phonebook[1].name = "B";
    phonebook[1].number = "23456789";

    phonebook[2].name = "C";
    phonebook[2].number = "34567890";

    for (i = 0; i < 3; ++i)
    {
        printf("%s %s\n", phonebook[i].name, phonebook[i].number);
    }
}