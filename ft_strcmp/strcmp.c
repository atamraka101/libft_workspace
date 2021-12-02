//#include "libft.h"

int		ft_strcmp(const char *ss1, const char *ss2)
 {
 	int	i;
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)ss1;
	s2 = (unsigned char *)ss2;
 	i = 0;
 	while (s1[i] == s2[i] && s1[i] && s2[i])
 		i++;
 	return (s1[i] - s2[i]);
 }

 /*
 int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
*/
