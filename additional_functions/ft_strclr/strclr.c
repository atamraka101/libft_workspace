/*
** Sets every character of the string to the value ’\0’.
** params, string that needs to be cleared
** returns none
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
