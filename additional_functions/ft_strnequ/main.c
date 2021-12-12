#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "First";
	char s2[] = "Second";
	char s3[] = "Fiarst";
	printf("ft_strnequ..........\n");
	if (ft_strnequ(s1, s2, 4) == 1)
		printf("WRONG\n");
	else
		printf("Right\n");
	if (ft_strnequ(s1, s3, 2) == 1)
		printf("Right\n");
	else
		printf("wrong\n");
	if (ft_strnequ(s1, s3, 3) == 1)
		printf("Wrong\n");
	else
		printf("Right\n");
	return (1);
}
