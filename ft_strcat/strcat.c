/*
** concatenate strings
** append a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating `\0'
** returns pointer s1
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		s[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
