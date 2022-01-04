#include "libft.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <limits.h>

static void t_putchar_fd(char *filename, char c)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0644);
	ft_putchar_fd(c, fd);
	//printf("%d", fd);
	close(fd);
}

static void t_putnbr_fd(char *filename, int n)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND);
	ft_putnbr_fd(n, fd);
	//printf("%d", fd);
	close(fd);
	chmod(filename, 0644);
}

int main(void)
{
	t_putnbr_fd("t_putnbr_fd.txt", 42);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", 12036);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", -107);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", INT_MIN);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", INT_MIN + 1);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", INT_MAX);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", 0);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	t_putnbr_fd("t_putnbr_fd.txt", -1);
	t_putchar_fd("t_putnbr_fd.txt", '\n');
	return (0);
}
