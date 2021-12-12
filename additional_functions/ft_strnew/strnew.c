/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
** Each character of the string is initialized at ’\0’.
** If the allocation fails the function returns NULL.
** returns: the string allocated and intialized to 0.
*/

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *new;

	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	ft_memset(new, '\0', size);
	return (new);
}
