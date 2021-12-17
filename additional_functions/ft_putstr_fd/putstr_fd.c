/*
** Outputs the string s to the file descriptor fd.
** Param. #1 The string to output.
** Param. #2 The file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
