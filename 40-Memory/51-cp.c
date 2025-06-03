 #include <stdio.h>
 #include <cs50.h>

// BYTE does not exist as a var type usually
typedef u_int8_t BYTE;

int main(int argc, string argv[])
{
    // This is how you can implement `cp` in bash yourself
    if (argc != 3)
    {
        printf("Error: must provide exactly 2 arguments\n");
        return 1;
    }
    FILE *source = fopen(argv[1], "r");
    FILE *destin = fopen(argv[2], "w");
    if (source == NULL)
    {
        printf("Error reading source file");
        return 1;
    }
    if (destin == NULL)
    {
        printf("Error initialising destination file");
        return 1;
    }

    // fread and fwrite reads / writes file by bytes
    BYTE b;
    // Reads the size of char (1 byte), 1 at a time
    // fread returns 0 when reaching end of file, or error
    while(fread(&b, sizeof(b), 1, source) != 0)
    {
        fwrite(&b, sizeof(b), 1, destin);
    }

    fclose(source);
    fclose(destin);
}
