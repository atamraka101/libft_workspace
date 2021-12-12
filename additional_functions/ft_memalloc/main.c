#include <stdio.h>
#include <stdlib.h>

void    *ft_memalloc(size_t size);

int    main(void)
{
    int	*a;

	a = (int*)ft_memalloc(8);
	if (a == NULL) {
		printf("a is not allocated.\n");
		return (0);
	}
	a[0] = 50;
	a[1] = 81;
	//a[2] = 11;
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	if (a)
		free(a);
    return (0);
}
/*
#include <stdio.h>
#include "libft.h"

void    *ft_memalloc(size_t size);

int    main(void)
{
    int    array[4] = {1, 2, 3, 4};
    int    *array2;
    int    i;
    size_t    n;

    n = 16;
    i = 0;
    array2 = ft_memalloc(n);
    while (i != 4)
    {
        printf ("%d", array2[i]);
        array2[i] = array[i];
        printf ("%d", array2[i]);
        i++;
    }
	free(array);
	free(array2);
    return (0);
}

*/
