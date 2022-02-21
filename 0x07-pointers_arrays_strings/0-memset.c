#include "main.h"
/**
 * _memset - recreate memeset
 * @s: a pointer in memory file
 * @b: the value to be set
 * @n: the number of values to be set to the value
 */

char *_memset(char *s, char b, unsigned int n)
{
  while (n > 0)
    {
      s[n] = b;
      n--;
    }

  return (s);
}
