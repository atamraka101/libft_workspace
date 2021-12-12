#include <stdio.h>
#include "libft.h"

char changed(unsigned int d, char c)
{
	unsigned int a;

	a = d;
	c = 'a';
	return (c);
}
int	main(void)
{
	char	s[] = "The string to be mapped.";
	char *a;
	printf("To be changed: %s\n", s);
	a = ft_strmapi(s, &changed);
	printf("New string: %s\n", a);
	if (a)
	{
		free (a);
		a = NULL;
	}
	return (1);
}
