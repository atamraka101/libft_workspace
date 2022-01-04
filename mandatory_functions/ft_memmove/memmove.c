/*
** move block of memory
** function copies len bytes from string src to string dst.
** The two strings may over-lap;
** the copy is always done in a non-destructive manner.
** returns the original value of dst.
*/
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = len;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d <= s)
		return (ft_memcpy(dst, src, len));
	if (d > s)
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (d);
}
