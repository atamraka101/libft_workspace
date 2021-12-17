#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

static void t_putchar_fd(char *filename, char c)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0644);
	ft_putchar_fd(c, fd);
	printf("%d", fd);
	close(fd);
}

int main(void)
{
	t_putchar_fd("t_putchar_fd.txt", 'H');
	t_putchar_fd("t_putchar_fd.txt", 'i');
	t_putchar_fd("t_putchar_fd.txt", '!');
	return (1);
}
