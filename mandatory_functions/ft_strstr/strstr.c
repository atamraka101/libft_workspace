/*
** locate a substring in a string
** locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
** Returns:
**  If needle is an empty string, haystack is returned;
**  if needle occurs nowhere in haystack, NULL is returned;
**  otherwise a pointer to the first character of the first occurrence of needle is returned.
*/

//#include "libft.h"
#include <string.h>
#include <stdlib.h>
char	*ft_strstr(char *str, char *need)
{
	int i;
	int j;

	i = 0;
	if (need[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == need[j])
		{
			if (need[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = -1;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	while (haystack[++i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i++] == needle[j++])
				{
					if (needle[j] == '\0')
						return ((char *)&haystack[i - j]);
				}
			}
			j = 0;
		}
	}
	return (NULL);
}*/
