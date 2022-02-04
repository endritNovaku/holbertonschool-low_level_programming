#include <stdio.h>
/**
 * main - print the alphabet in lowercase and then in uppercase
 * Return: Allways 0
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWZYZ\n";
int i;

for (i = 0; i < 53; i++)
{
putchar(alphabet[i]);
}
return (0);
}
