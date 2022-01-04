/*
** locate byte in byte string
** returns a pointer to the byte located, or,
** NULL if no such byte exist within n bytes
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);

/*

void unit_test_memchar()
{*/

	/*assert(ft_memchr("abcdef", 'a', 5) == memchr("abcdef", 'a', 5));
	assert(ft_memchr("abcdef", 'c', 5) == memchr("abcdef", 'c', 5));
	assert(ft_memchr("abcdef", '\0', 7) == memchr("abcdef", '\0', 7));
	assert(ft_memchr("abcdef", 'z', 6) == memchr("abcdef", 'z', 6));
	assert(ft_memchr("abcdef", 999, 6) == memchr("abcdef", 999, 6));*/

	/* Barbarian test from Qperez !! */
	/*char			ctab[11];
	int				itab[11];
	unsigned long	ltab[11];
	size_t			j;
	int				i;

	i = -300;
	ft_memchr(NULL, 0, 0);
	j = 0;

	while (i < 300)
	{
		j = 0;
		while (j < 11)
		{
			ctab[j] = (char)rand();
			itab[j] = rand();
			ltab[j] = (unsigned long)rand() * 10000;
			j++;
		}
		if ((memchr(ctab, i, sizeof(ctab)) != ft_memchr(ctab, i, sizeof(ctab))))
		{
			assert(!"Unsigned char problem? ctab");
			break;
		}
		if (((memchr(itab, i, sizeof(itab)) != ft_memchr(itab, i, sizeof(itab)))))
		{

			assert(!"Unsigned char problem? itab");
			break;
		}
		if ((memchr(ltab, i, sizeof(ltab)) != ft_memchr(ltab, i, sizeof(ltab))))
		{
			printf("i:%d\n", i);
			assert(!"Unsigned char problem? ltab");
			break;
		}
		++i;
	}*/
/*
	ft_memchr(NULL, 0, 0);
	ft_memchr(NULL, 0, 10);
	ft_memchr(NULL, -10, 10);
*/
/*	printf("Passed\n");
}
*/


int main(void)
{
	char *a = "Some of the functions prototypes";
	char b[] = "\0";
	printf("Ori:%p\n", memchr(a, 0, 1000));
	printf("My:%p\n", ft_memchr(a, 0, 1000));
	printf("%p\n", memchr(b, '\0', 5));
	printf("%p\n", ft_memchr(b, '\0', 5));
	printf("%p\n", memchr("abcdef", '\0', 7));
	printf("%p\n", ft_memchr("abcdef", '\0', 7));
	//unit_test_memchar();
	//unsigned_char_test();
	return (1);
}
