#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
int i = 0;
int a = 'a';
while (i < 10)
{
while (a <= 'z')
{
putchar(a);
putchar('\n');
}
}
}
/**
 * main - print alphabet
 * Return: Allways (0)
 */
int main(void)
{
print_alphabet_x10();

return (0);
}
