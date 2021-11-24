#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*int main(void)
{
	char *a = "this is the world going crazy.";
	char *b = "Why is the world going crazy?";
	b = ft_memccpy(b, a, (unsigned char)'o', 10);
	printf("%s", b);
	return (1);
}
*/

int main()
{
    char dst[8];
    char *src = "Source";
    int c = 5;
    int character = 'o';
    char *p;
    int i;

    for (i = 0; i < c; i++)
        dst[i] = '*';

    printf("src = %s\n", src);
    p = ft_memccpy(dst, src, character, c);
    assert(p != NULL);
    printf("Character '%c' is found in \"%s\"\n", character, src);
    printf("*p = %c\n", *p);

    printf("dst = ");
    for (i = 0; i < c; i++)
        putchar(dst[i]);
    printf("\n");

    return 0;
}
