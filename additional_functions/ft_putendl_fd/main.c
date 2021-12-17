#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>

static void t_putendl_fd(char *filename, char *s)
{
	int fd;

	fd = open("t_putendl_fd.txt", O_CREAT | O_RDWR | O_APPEND);
	ft_putendl_fd(s, fd);
	close(fd);
	chmod(filename, 0644);
}

int main(void)
{
	char s1[] = "Hey!!!";
	char s2[] = "World... ";
	t_putendl_fd("t_putendl_fd.txt", s1);
	t_putendl_fd("t_putendl_fd.txt", s2);
	return (1);
}
