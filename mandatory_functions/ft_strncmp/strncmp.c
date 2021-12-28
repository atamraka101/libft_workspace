/*
** lexicographically compared
** a size_t variable is often used for a memory allocation function and
** will be the full size of the string
*/
#include <stdlib.h>

int	ft_strncmp(const char *ss1, const char *ss2, size_t n)
{
	size_t				i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)ss1;
	s2 = (unsigned char *)ss2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
