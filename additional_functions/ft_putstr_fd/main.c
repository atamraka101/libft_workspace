#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

static void t_putstr_fd(char *filename, char *c)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0644);
	ft_putstr_fd(c, fd);
	printf("%d", fd);
	close(fd);
}

int main(void)
{
	t_putstr_fd("t_putstr_fd.txt", "This ");
	t_putstr_fd("t_putstr_fd.txt", "function ");
	t_putstr_fd("t_putstr_fd.txt", "works.");
	return (1);
}
