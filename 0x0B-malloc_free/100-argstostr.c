#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * argstostr - concatenates all arg to string
 * @ac: the arg count
 * @av: the arg vetor
 *
 * Return: =0
 */
char *argstostr(int ac, int av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';

		j = 0;
		k++;
	}

	k++;
	s[k] = '\0';
	return (s);
}
