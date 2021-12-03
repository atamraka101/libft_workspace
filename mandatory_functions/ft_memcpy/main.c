#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	/*char *s = "What now!";
	char *a = NULL;
	a = ft_memcpy((void *)a, (const void *)s, 5);
	printf("%s", a);*/

	char src[] = "foo";
	char dst[] = "bar";

	assert(memcpy(dst, src, 0) == dst);
	assert(memcmp(dst, "bar", sizeof(dst)) == 0);
	return (1);
}
