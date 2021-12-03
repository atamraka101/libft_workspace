/*
** copies len characters from src to dst.
** src < len, then remainning dst filled with '\0' characters
** returns dst
*/
//#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (len-- != 0)
			dst[i] = src[i];
		i++;
	}
	while (len != 0)
	{
		dst[i++] = '\0';
		len--;
	}
	return (dst);
}
