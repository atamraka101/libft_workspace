#include "libft.h"
#include <stdio.h>

static void free_array(char **array, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int main(void)
{
	char **array = ft_strsplit("******************0**1**2*3****4*******", '*');

	printf("ft_strsplit.......\n");
	int i = 0;
	while (array[i])
	{

		if (ft_atoi(array[i]) != i)
		{
			printf("%d [KO]\n", i);
			return (1);
		}
		i++;
	}

	printf("[OK]\n");
	free_array(array, 5);

	//testing alelievr libft-unit-test crashed one, now works
	char **array2 = ft_strsplit("      split       this for   me  !       ", ' ');
	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
	int status = 1;
	for (int i = 0; i < 6; i++)
	{
		if (array2[i] != NULL)
			printf("%s\n", array2[i]);
		if (array2[i] && expected[i])
			if(!ft_strequ(array2[i], expected[i]))
			{
				status = 0;
				//break;
			}
	}
	if (status)
		printf("[OK]\n");
	else
		printf("[KO]\n");
	free_array(array2, 6);

	return (0);
}
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[] = "*hello*fellow***students*";
	char c = '*';
	char **a;
	int i;
	int j;

	i = 0;
	j = 0;
	printf("ft_strsplit.......\n");
	printf("Before: %s\n", s);
	a = ft_strsplit(s, c);
	printf("After....\n");
	while (a[i][j] != '\0')
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			printf("%c \t", a[i][j]);
			j++;
		}
		printf("\n");
	}
	if (a)
	{
		free(a);
		a = NULL;
	}
	return 1;
}*/
