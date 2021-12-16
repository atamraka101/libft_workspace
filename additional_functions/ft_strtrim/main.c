#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[] = "   String starts here and ends here.   \n";
	char *p;
	printf("ft_strtrim.........\n");
	printf("Before: %s\n", s);
	p = ft_strtrim(s);
	printf("After: %s\n", p);
	char a[] = "String starts here and ends here.";
	if (ft_strcmp(p, a) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	if (p)
	{
		free(p);
		p = NULL;
	}
	return (1);
}
