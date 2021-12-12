#include "libft.h"
#include <stdio.h>

int main(void)
{
	char src[50], dest[50];
	ft_strcpy(src, "This is source");
	printf("%s\n", src);
	ft_strcpy(dest, "This is destination");
	printf("%s\n", src);
	ft_strcpy(src, dest);
	printf("%s\n%s\n", src, dest);
	ft_strcat(dest, src);

	printf("Final destination string : |%s|", dest);
	return (0);
}
