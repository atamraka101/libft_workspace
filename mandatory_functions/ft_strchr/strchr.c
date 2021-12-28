/*
** locate first occurrence of a character c(converted to char) in string s
** '\0' is part of the string
** returns a pointer to the located character or,
** NULL if there is no character in the string.
*/

//#include "libft.h"

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	len++;
	while (i < len)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}
