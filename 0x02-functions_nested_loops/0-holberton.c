#include "holberton.h"
#include <stdio.h>
/**
 *main - main fanction to display Holberton
 *Return: Always 0 (success)
 */
int main(void)
{

char h[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
int i;
for (i = 0 ; i  <= 8; i++)
{
_putchar(h[i]);
}
_putchar(10);
return (0);
}
