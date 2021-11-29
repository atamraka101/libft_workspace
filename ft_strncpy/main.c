#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dst, const char *src, size_t len);
/*char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 1;

	while (str[i])
		ft_putchar(str[i++]);
}

void	test(char *dest, char *src, int n)
{
	ft_putstr(ft_strncpy(dest, src, n));
	ft_putchar('\0');
	ft_putstr(strncpy(dest, src, n));
}

int main(void)
{
	char dest[20] = {'u', 'n', ' ', 't', 'e', 's', 't', 'e'};
	char src[] = {'v', 'o', 'i', 'l', 'a', ' ','f', 'i', 'n', '\0'};
	//puts(src);
	//puts(dest);
	test(dest, src, 10);
	return 0;
}

/*#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *dst1;
	char *dst2;

	dst1 = ft_memalloc(25);
	dst2 = ft_memalloc(25);
	if (ft_strequ(ft_strncpy(dst1, "Hello world", 0), strncpy(dst2, "Hello world", 0)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	printf("ft_strncpy: %s / strncpy: %s\n[OK]\n", dst1, dst2);
	if (ft_strequ(ft_strncpy(dst1, "Hello world", 10), strncpy(dst2, "Hello world", 10)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	printf("ft_strncpy: %s / strncpy: %s\n[OK]\n", dst1, dst2);
	if (ft_strequ(ft_strncpy(dst1, "Hello world", 15), strncpy(dst2, "Hello world", 15)) != 1)
	{
		printf("[KO]\n");
		return (0);
	}
	printf("ft_strncpy: %s / strncpy: %s\n[OK]\n", dst1, dst2);
	free(dst1);
	free(dst2);
	return (0);
}*/
