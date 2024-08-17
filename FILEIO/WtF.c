// Writing to a file

#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Test.txt", "w");

    // fprintf(fptr, "%c", 'm');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    fputc('m', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);

    fclose(fptr);

    return 0;
}