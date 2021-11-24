/*
** copy memory area
** fun copies n bytes from memory area src to dst
** overlap behavior undefined
** Applications in which dst and src might overlap should memmove(3) instead.
** returns the original value of dst
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	//printf("Test1 %zu %s", n, (char *)src);
	size_t i;
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	//printf("Test %s, %zu, %s \n", s, i, d);
	while (i < n)
	{
		//printf("%zu", i);
		d[i] = s[i];
		i++;
	}
	printf("%zu", i);
	//d[i] = '\0';
	return (d);
}
