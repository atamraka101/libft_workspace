#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	char *s = "Hive Helsinki!";
	char *ss = "Hive Helsinki";
	printf("%d\n", memcmp(s, ss, 5));
	printf("%d\n", ft_memcmp(s, ss, 5));
	printf("%d\n", memcmp(s, ss, 14));
	printf("%d\n", ft_memcmp(s, ss, 14));
	return (0);
}
