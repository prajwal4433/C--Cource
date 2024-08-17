// Find the salted from a password enter by user if the salt is "123" & added at the end.

#include <string.h>
#include <stdio.h>

void printPass(char password[]);

int main()
{
    char password[100];
    printf("Enter your password : ");
    scanf("%s", password);

    printPass(password);
    return 0;
}

void printPass(char password[])
{
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, password);
    strcat(newpass, salt);
    puts(newpass);
}