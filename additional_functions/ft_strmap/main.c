#include <stdio.h>
#include "libft.h"

char changed(char c)
{
	c = 'a';
	return (c);
}
int	main(void)
{
	char	s[] = "The string to be mapped.";
	char *a;
	printf("To be changed: %s\n", s);
	a = ft_strmap(s, &changed);
	printf("New string: %s\n", a);
	if (a)
	{
		free (a);
		a = NULL;
	}
	return (1);
}
