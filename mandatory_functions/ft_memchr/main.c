/*
** locate byte in byte string
** returns a pointer to the byte located, or,
** NULL if no such byte exist within n bytes
*/

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char *a = "Some of the functions’ prototypes";
	printf("%p\n", memchr(a, 'f', 20));
	printf("%p", ft_memchr(a, 'f', 20));
	return (1);
}
