# include<stdio.h>
# include<string.h>
#include <assert.h>
char	*ft_bzero(void *s, size_t n);

/*int main(void)
{
	char *str="Hello World";
	printf("%s", ft_bzero(&str, 5));
	return 1;
}
*/

int	main(void)
{
	char	str1[] = "fortytwo";
	char	str2[] = "fortyone";
	size_t 	len = strlen(str1);

	printf("...ft_bzero\n");
	bzero(str1, (0));
	ft_bzero(str2, (0));
	printf("n=0\t[%s]\n", str1);
	assert(memcmp(str1, str2, sizeof(char) * 5) == 0);
	bzero(str1, len);
	ft_bzero(str2, len);
	printf("n=%zu\t[%s]\n", len, str1);
	assert(memcmp(str1, str2, sizeof(char) * len) == 0);
	return 1;
}
