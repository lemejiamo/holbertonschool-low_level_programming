#ifndef HOLBERTON_H
#define HOLBERTON_H

/* 0x0B. C - malloc, free */

/* 0. Float like a butterfly, sting like a bee  */

char *create_array(unsigned int size, char c);

/*1. The woman who has no imagination has no wings */

char *_strdup(char *str);

/*2. He who is not courageous enough to take risks will accomplish nothing in life */

char *str_concat(char *s1, char *s2);

/*3. If you even dream of beating me you'd better wake up and apologize */

int **alloc_grid(int width, int height);

/*4. It's not bragging if you can back it up */

void free_grid(int **grid, int height);

/*5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe */

char *argstostr(int ac, char **av);

#endif 
