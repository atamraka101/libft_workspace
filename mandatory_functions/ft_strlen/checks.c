#include "libft.h"
#include <stdio.h>
//checks for int and size_t datatypes clash, result can be interchangeable
// like char and int, unsigned int
int main(void)
{
	char s[] = "sfdsfsd";
	unsigned int a;
	a = ft_strlen(s);
	printf("%u", a);
	return (1);
}
