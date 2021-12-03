#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n);

int	main(void)
{
	char a[] = "String is modified";

	puts(a);
	ft_memset(a, '$', 5);
	puts(a);
	return (0);
}
