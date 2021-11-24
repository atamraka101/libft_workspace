#include <stdlib.h>
#include <stdio.h>

int length(char const *s, char c)
{
	int i;
	int len;
	int c_count;

	i = 0;
	len = 0;
	c_count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			c_count++;
			i++;
		}
		if (c_count > 1)
			len++;
		c_count = 0;
		len++;
		i++;
	}
	len++;
	//printf("Value of i = %d\n", i);
	//printf("Value of c_count = %d\n", c_count);
	//printf("Value of len = %d\n", len);
	return (len);
}
char	**ft_strsplit(char const *s, char c)
{
	int l;
	int i;
	int j;
	char **new_set;
	int len;

	l = 0;
	i = 0;
	j = 0;
	len = length(s, c);
	new_set = (char **)malloc(sizeof(char) * len);
	if (!new_set)
		return (NULL);
	if (s[l] == c)
		l++;
	while (s[l] != '\0')
	{
		while (s[l] == c)
		{
			l++;
			if (s[l] != c)
			{
				new_set[i][j] = '\0';
				i++;
				j++;
				l++;
				break;
			}
		}
		new_set[i][j] = s[l];
		l++;
		j++;
	}
	i = 0;
	j = 0;
	while (new_set[i][j] != '\0')
	{
		while (new_set[i][j] != '\0')
		{
			printf("%c\n", new_set[i][j]);
			j++;
		}
		i++;

	}
	return (new_set);
}
int main(void)
{
	char *s1 = "*hello*fellow***students*";
	//length(s1, '*');
	char **a;
	int i;
	int j;

	i = 0;
	j = 0;
	a = ft_strsplit(s1, '*');
	while (a[i][j] != '\0')
	{
		while (a[i][j] != '\0')
		{
			printf("%c", a[i][j]);
			j++;
		}
		i++;
	}
	free (a);
	return (1);
}
