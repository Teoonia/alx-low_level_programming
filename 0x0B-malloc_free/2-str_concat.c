#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
char *strconc;
int strcount1;
int strcount2;

for (strcount1 = 0; s1[strcount1]; strcount++)
for (strcount2 = 0; s2[strcount2]; strcount++)
strconc = malloc((sizeof(char) + strcount1 +strcount2) + 1)

return (strconc);
}
