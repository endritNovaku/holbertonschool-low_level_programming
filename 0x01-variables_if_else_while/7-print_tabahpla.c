#include <stdio.h>
/**
 * main - prints reverse alphabet
 * Return: Allways 0
 */

int main(void)
{
char ch;
char n = "\n";

for (ch = "z"; ch > "a"; ch++)
{
putchar(ch);
putchar(n);
}
return (0);
}
