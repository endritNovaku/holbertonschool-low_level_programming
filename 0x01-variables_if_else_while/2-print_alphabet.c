#include <stdio.h>
/**
 * main - print the alhabet
 * Return: allways zero
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
int i;


for (i = 0; i < 27; i++)
{
putchar(alphabet[i]);
}
return (0);
}
