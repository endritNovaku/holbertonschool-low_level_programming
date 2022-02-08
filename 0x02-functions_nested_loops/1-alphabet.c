#include <stdio.h>
/**
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
putchar('\n');
}
}
/**
 * main - print lowercase alphabet
 * Return: Allways 0
 */
int main(void)
{
print_alphabet();

return (0);
}
