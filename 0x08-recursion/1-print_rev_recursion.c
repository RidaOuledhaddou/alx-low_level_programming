#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
    int len = strlen(s); 
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        char temp = s[start];  
        s[start] = s[end];    
        s[end] = temp;
        start++;
        end--;
    }
}

