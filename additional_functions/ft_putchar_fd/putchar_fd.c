/*
** Outputs the char c to the file descriptor fd.
** Param. #1 The character to output.
** Param. #2 The file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
