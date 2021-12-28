/*
** it locates the last occurrence of c
** return a pointer to the located character,
** or NULL if the character does not appear in the string.
*/

//#include "libft.h"

#include <stdlib.h>
char	*ft_strrchr(const char *s, int c)
{
	//int i;
	int len;

	//i = 0;
	//len = 0;
	//while (s[len])
	//	len++;
	//len++;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
