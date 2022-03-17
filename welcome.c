#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s [100];
char sen [50];


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", & ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]s",sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}