/*
** takes parameter the address of a memory area that needs to be freed
** using free(3), then puts the pointer to NULL
*/
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (ap && *ap) //if (ap != NULL)
	{
		free (*ap);
		*ap = NULL;
	}
}
