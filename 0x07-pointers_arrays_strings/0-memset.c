#include "main.h"
/**
 *_memset - fills memory with a constant number of bytes
 *@s: pointer with the constant byte
 *@b: constant byte
 *@n: number of bytes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
j = 0;
while (j < n)
{
s[j] = b;
j++;
}
return (s);
}
