#include <stdlib.h>
#include <stdio.h>

char** ft_strsplit(char const *s, char c);

int main(void)
{
	char **a;
	int i;
	int j;

	i = 0;
	j = 0;
	a = ft_strsplit("*hello*fellow***students*", '*');
	while (a[i] != (void*)'\0')//
	{
		while (a[i][j] != '\0')
	{
		printf("%c", a[i][j]);
		j++;
	}
		printf("\n");
		i++;
	}
	a = NULL;
	free(a);
	return 1;
}
