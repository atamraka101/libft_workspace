/*
** locate byte in byte string
** returns a pointer to the byte located, or,
** NULL if no such byte exist within n bytes
*/
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *copy;

	i = 0;
	copy = (unsigned char *)s;
	while (i < n)
	{
		if (copy[i] == (char)c)
			return (&copy[i]);
		else
			i++;
	}
	return (NULL);
}
