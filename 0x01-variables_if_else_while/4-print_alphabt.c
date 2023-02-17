#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
        char c;

        c = 'a';
        while
                (c <= 'z') {
                        if ((c != 'q' && c != 'e') && c <= 'z')
                                putchar(c);
                        c++;
                }
        putchar('\n');
        return (0);
}



5-print_numbers.c

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int a;

        for (a = 0; a < 10; a++)
                printf("%d", a);
        putchar('\n');
        return (0);
}

