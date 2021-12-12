/*
** allocates memory using malloc
** returns the allocated needed memory
** The memory allocated is initialized to 0.
*/
#include <stdlib.h>
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size)
{
	void	*new;

	if (!(new = malloc(size)))
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
