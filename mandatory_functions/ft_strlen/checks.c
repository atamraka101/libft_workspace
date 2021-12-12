#include "libft.h"
#include <stdio.h>
//checks for int and size_t datatypes clash, result can be interchangeable like char and int
int main(void)
{
	char s[] = "sfdsfsd";
	size_t a;
	a = ft_strlen(s);
	printf("%zu", a);
	return (1);
}
