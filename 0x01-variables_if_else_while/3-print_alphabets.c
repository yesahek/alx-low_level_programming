#include <stdio.h>
/**
 * main - This is the main function
 * Description: this program Prints out the alphabet
 * Return: returns 0
 */
int main(void)
{
char c, d;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar(10);
return (0);
}
