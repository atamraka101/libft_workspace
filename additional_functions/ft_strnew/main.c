#include "libft.h"
#include <stdio.h>

int main(void)
{
	char str[] = "aaaaaaaaaa";
	printf("%lu\n", sizeof(str));
	char *a;
	a = ft_strnew(sizeof(str));
	printf("%s\n", a);
	int i = 0; int j = 0;int z = 0;
	while (i < 11 - 1 )
	{
		if (str[i] == a[i])
			printf("%d %c:%c\n", ++j, str[i], a[i]);
		else
			printf("size: %d\n", ++z);
		i++;
	}
	if (a)
		free(a);
	return (1);
}
