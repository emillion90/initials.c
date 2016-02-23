/**
* pset 2
* initials.c
* Evan Million <million.evan@gmail.com>
**/
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
    printf("");
    string name = GetString();
    
    // Check if input is valid
    if (name != NULL)
    {
        // Print first character of first word and convert to upper
        printf("%c", toupper(name[0]));
        // Loop over the length of string
        for (int i = 0, n = strlen(name); i <= n; i++)
        {
            // Over each iteration find the space and print out next char
            // and convert to upper
            if (name[i] == ' ')
                printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}
