// We can subtract one pointer from another pointer.
// We can also compare 2 pointers.

#include <stdio.h>

int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference is : %d\n", ptr - _ptr);
    printf("Compare is : %d\n", ptr == _ptr);

    return 0;
}