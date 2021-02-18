#ifndef HOLBERTON_H
#define HOLBERTON_H

/* a function that concatenates two strings. */

char *_strcat(char *dest, char *src);

/* a function that concatenates two strings. */

char *_strncat(char *dest, char *src, int n);

/* a function that copies a string.*/

char *_strncpy(char *dest, char *src, int n);

/* a function that compares two strings. */

int _strcmp(char *s1, char *s2);

/* a function that reverses the content of an array of integers. */

void reverse_array(int *a, int n);

/* a function that changes all lowercase letters of a string to uppercase. */

char *string_toupper(char *);

/* a function that capitalizes all words of a string. */

char *cap_string(char *);

/* a function that encodes a string into 1337. */

char *leet(char *);


/* a function that encodes a string using rot13. */

char *rot13(char *);

#endif
