#include <stdio.h>
#include "libft.h"

int main (void)
{
	char s1[] = "You have to ";
	char s2[] = "join this sentence.";
	char *cat;

	printf("%s\n", s1);
	printf("%s\n", s2);
	cat = ft_strjoin(s1, s2);
	printf("%s\n", cat);
	if (cat)
	{
		free(cat);
		cat = NULL;
	}
	return (1);
}
