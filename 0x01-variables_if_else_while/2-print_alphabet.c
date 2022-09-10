#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entr point
 *Return: 0 is success
 */
int main(void)
{
char low;
for (low = 'a', low <= 'z'; low++)
putchar(low);
putchar('/n');
return (0);
}
