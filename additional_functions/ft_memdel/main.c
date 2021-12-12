/*
#include <stdlib.h>
#include <stdio.h>

void	*ft_memdel(void **ap);

int main(void)
{
	int **doubled;
	int *single;
	int regular;

	regular = 8;//needs malloc
	single = &regular;
	doubled = &single;
	printf("before ft_memdel%d\n", *single);
	ft_memdel((void **)&doubled);
	if (!doubled)
	{
		printf("No");
		return (0);
	}
	printf("after ft_memdel%d\n", *single);
}*/

#include "libft.h"
#include <stdio.h>

static void check_print(char *str)
{
	if (str == NULL)
		printf("NULL\n");
	else
    {
        printf("%s\n", str);
    }
}

int main(void)
{
	char *dup;

	char *str = "Hello world";
	dup = ft_strdup(str);
	printf("Before ft_memdel: ");
    check_print(dup);
    ft_memdel((void **)&dup);
	if (dup != NULL)
	{
		printf("[KO]\n");
		return (1);
	}
	printf("After ft_memdel: ");
	check_print(dup);
	printf("[OK]\n");
    return (0);
}
