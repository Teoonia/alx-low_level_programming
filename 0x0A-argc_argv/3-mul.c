#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int numt1, numt2, prodt;
if(argc != 3)
{
printf("Error \n");
return(1);
}
numt1 = atoi(argv[1]);
numt2 = atoi(argv[2]);
prodt = numt1 * numt2;
printf("%d \n", prodt);
return(0);
}
