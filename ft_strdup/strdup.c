/*
** save a copy of a string
** allocates sufficient memory for a copy of the string s1, does the copy,
** and returns a pointer to it
*/
#include <stdlib.h>
#include <stdio.h>
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy || s1 == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	//return (&copy[0]);
	return (copy);
}
