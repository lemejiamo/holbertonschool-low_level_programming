
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr -  argstostr
* @ac: integer
* @av: string
* Return: michar
*/
char *argstostr(int ac, char **av)
{
char *michar;
int i, j, m = 0, leng = 0;

if (ac == 0 || **av == '\0')
	return (NULL);


for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
		{
		leng++;
		}

}
printf("%d\n", leng);

michar = malloc(sizeof(char) * (leng + ac + 1));
if (michar == '\0')
	return (NULL);

i = 0;
j = 0;
for (; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		michar[m] = av[i][j];
		m++;
	}
michar[m] = '\n';
m++;
}
m++;
michar[m] = '\0';
return (michar);
}
