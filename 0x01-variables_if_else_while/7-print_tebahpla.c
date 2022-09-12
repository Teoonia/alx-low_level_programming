#include <stdio.h>
/**
 * main - entry point.
 *
 * Return: (0) Always success.
 */
int main(void)
{
char al;
for (al = 'z'; al >= 'a'; al--)
{
putchar(al);
}
putchar('\n');
return (0);
}
