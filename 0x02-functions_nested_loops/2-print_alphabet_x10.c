#include "main.h"
/**
 *print_alphabet_x10 - a function to print 10x the alphabet
 *
 *Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int T, ch;
T = 0;
while (T < 10)
{
for (ch = 'a'; ch = 'z'; ch++)
{
_putchar(ch);
}
T++;
_putchar('\n');
}
}

