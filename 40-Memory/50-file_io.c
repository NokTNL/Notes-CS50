 #include <stdio.h>
 #include <cs50.h>

int main()
{
    /**
    * File I/O
    */
    // stdio.c includes a bunch of functinos that mirrors those for standard i/o but for files
    // files in C are represented by file pointers
    FILE *file = fopen("phonebook.csv", "a"); // "w" means allow appending
    // !! If the file opening was unsuccessful, it will return a NULL pointer, make sure to check that!
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    fprintf(file, "%s,%s\n", name, number);

    // You should close the file after finishing otherwise it may cause issues
    fclose(file);
}
