#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[] = "After 5Copied this!";
	char *sub;
	char a[] = "Copied this!";

	printf("ft_strsub......\n");
	printf("Before: %s\n", s);
	sub = ft_strsub(s, 7, 12);
	printf("After: %s\n", sub);
	if (ft_strcmp(sub, a) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	if (sub)
	{
		free(sub);
		sub = NULL;
	}
	return (1);
}
