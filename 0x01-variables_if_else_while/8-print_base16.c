#include <stdio.h>
/**
 * main - entry point.
 * Return: 0 always success.
 */
int main(void)
{
int x;
char al;
for (x = 0; x < 10; x++)
{
putchar(x);
}
for (al = 'a'; al <= 'f'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
