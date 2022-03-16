#include <stdio.h>
#include <ctype.h>
int main()
{
    /* first chac to be written*/
    char ch = 'a';

    /*chac to be written in stdout*/
    for(int x = 'A'; x <= 'Z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }

    return (0);
}

