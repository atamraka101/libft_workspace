#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n);

int	main(void)
{
	char a[] = "String is modified";

	printf("Before memset:%s\n", a);


	printf("After ft_memset: %s\n",ft_memset(a, '$', 5));
	printf("After memset: %s\n", memset(a, '$', 5));

	return (0);
}
