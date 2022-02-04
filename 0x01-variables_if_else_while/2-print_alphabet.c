#include <stdio.h>
/**
 * main - print the alhabet
 * Return: allways zero
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;


for (i = 0; i < 30; i++)
{
putchar(alphabet[i]);
}
return (0);
}
