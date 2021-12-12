#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[] = "clear this";
	printf("Before: %s\n", s);
	ft_strclr(s);
	printf("After: %s\n",s);
	return (1);
}
