#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: 0 is success
 */
int main(void)
{
char low;
for (low = 'a', low <= 'z'; low++)
{
putchar(low);
}
putchar('\n');
return (0);
}
