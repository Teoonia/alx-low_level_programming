#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
char *dup;
int str_lent;
int count;

for (str_lent = 0; str[str_lent] != '\0'; str_lent++);
{
	dup = malloc((sizeof(char) * str_lent) + 1);
}
for (count = 0; str[count] != '\0'; count++)
{
str[count] = dup[count];
}
dup[count] = '\0';
return (dup);
}
