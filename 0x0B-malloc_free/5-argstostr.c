#include <stdlib.h>
#include <stdio.h>
/**
*
*/
char *argstostr(int ac, char **av)
{
char **michar;
int i, j;

if (ac == 0 || **av == '\0')
        return (NULL);

michar = malloc(sizeof(char) * ac);
        if (michar == NULL)
                return (NULL);

for (i = 0; i < ac; i++)
        {
        for (j = 0; av[i][j] != '\0'; j++ )
                {
                }
                /* printf("%s\n", *(av + i)); */
                michar[i] = malloc(sizeof(char) * (j));
                 if (michar[i] == NULL)
                      {
                      return (NULL);
                      }
                /* printf("%d\n", j); */
        }

for (i = 0; i < ac; i++)
  {
        for ( j = 0; av[i][j] != '\0'; j++)
        {
            michar[i][j] = av [i][j];
            /* printf("%c\n", av [i][j]); */
        }
        /*michar[i][j] = '\n'; */
       /* printf("%s\n", michar[i]); */
  }
 /* j++; */
/*michar[i][j] = '\0';*/
return (*michar);
}
