/*
** Takes as a parameter the address of a string that need to be
** freed with free(3), then sets its pointer to NULL.
** paramsThe string’s address that needs to be freed and its pointer set
** to NULL.
** returns NONE
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}
