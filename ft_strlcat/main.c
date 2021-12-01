#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int main()
{
	char src[] = "this is added";
	//char *src;
	char dest[7];
	char temp[] = "dest";
	size_t n = 0;

	strcpy(dest, temp);

	printf("strcat: %s\n", dest);
	n =	ft_strlcat(dest, src, sizeof(dest));
	printf("n: %lu, strlcat: %s\n", n, dest);




	return (1);
}
