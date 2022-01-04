#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	//char *ss = "Hive Helsinki";
	char *s = "Hive Helsinki!";

	printf("%d\n", memcmp(s, NULL, 5));
	printf("%d\n", ft_memcmp(s, NULL, 5));
	//system("leaks a.out");
	//printf("%d\n", memcmp(s, ss, 14));
	//printf("%d\n", ft_memcmp(s, ss, 14));
	//system("leaks a.out");
	return (0);
}
