#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *s1 = "This needs to be freed.";
	char *a = ft_strdup(s1);
	printf("Before: %s\n", a);
	ft_strdel((char **)&a);
	printf("After:%s\n", a);
	return 1;
}
