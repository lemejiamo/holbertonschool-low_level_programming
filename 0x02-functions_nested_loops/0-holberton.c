# include <stdio.h>
# include "holberton.h"

int main (void)

{
	int n;
	char name[10] = {'H','o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
 	for (n = 0; n <= 9; n++)
	     {
		_putchar(name[n]);
	     }
	_putchar('\n');
	return (0);
}
