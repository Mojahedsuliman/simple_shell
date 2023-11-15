#include "shell.h"

/*
 * printer - the function will prints a string
 * @str: string to be printed
 *
 *
 * Return: nothing
 */
void printer(char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
