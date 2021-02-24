#ifndef HOLBERTON_H
#define HOLBERTON_H

/* similar a putchar */

int _putchar(char c);

/*  a function that prints a string, followed by a new line */

void _puts_recursion(char *s);

/*  a function that prints a string in reverse. */

void _print_rev_recursion(char *s);

/* a function that returns the length of a string. */

int _strlen_recursion(char *s);

/* a function that returns the factorial of a given number. */

int factorial(int n);

/* a function that returns the value of x raised to the power of y */

int _pow_recursion(int x, int y);

/* a function that returns the natural square root of a number */

int _sqrt_recursion(int n);

/* a function that returns 1 if the input integer is a prime number, otherwise return 0. */

int is_prime_number(int n);

/* a function that returns 1 if a string is a palindrome and 0 if not. */

int is_palindrome(char *s);

/*  a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0. */

int wildcmp(char *s1, char *s2);


#endif 

