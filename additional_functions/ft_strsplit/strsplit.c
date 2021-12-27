/*
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself)
** obtained by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
** Example: ft_strsplit("*hello*fellow***students*", ’*’) returns
** the array ["hello", "fellow", "students"].
** Param. #1 The string to split.
** Param. #2 The delimiter character.
** Return value The array of “fresh” strings result of the split.
*/

#include "libft.h"
#include <stdio.h>
//#include <string.h>

static int n_words(char const *s, char c)
{
	int i;
	int n_words;

	i = 0;
	n_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			n_words++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (n_words);
}

static char *inner_list(char const *s, size_t n)
{
	char *list;

	list = (char *)malloc(sizeof(char) * n + 1);
	if (!list)
		return (NULL);

	list = ft_strncpy(list, s, n);
	//list = strncpy(list, s, n);
	list[n] = '\0';
	//printf("innerlist %s\n", list);
	return (list);
}

static int free_array(char ***tab, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		free(*tab[i]);
		i++;
	}
	free(*tab);
	return (0);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int cur;
	int k;
	int len;
	int w_count;
	char **res;
	char *hold;
	char *expand;

	i = 0;
	cur = 0;
	len = 0;
	w_count = n_words(s, c);

	res = (char **)malloc(sizeof(char *) * w_count + 1);
	res[w_count - 1] = NULL;
	hold = NULL;
	if (!res)
		return (NULL);
	while (s[cur])
	{
		if (s[cur] != c)
		{
			len ++;
			expand = (char*)malloc(sizeof(char) + 1);
			expand[len] = '\0';
			if (hold)
			{
				ft_strcpy(expand, hold);
			}
			expand[len - 1] = s[cur];
			if (hold)
			{
				free(hold);
			}
			hold = expand;



		} else {
			if (hold){
				res[i++] = hold;
			}

			hold = NULL;
			len = 0;
		}
		cur++;
	}
	/*while (s[i])
	{
		while (s[i] == c)
			i++;
		printf("s[%d]: %c\n", i, s[i]);
		i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			res[k] = inner_list(&s[j], i - j);
			k++;
		}
	}
	res[k] = NULL;*/
	return (res);
}
