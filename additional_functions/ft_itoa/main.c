#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int main(void)
{
	int i;
	char* res;

	i = 20;
	res = ft_itoa(i);
	printf("%s\n", res);

	free(res);
	res = NULL;
	//printf("Test");
	//printf("%s", res);
	i = -2147483648;
	res = ft_itoa(i);
	printf("%s\n", res);

	free(res);
	i = 2147483647;
	res = ft_itoa(i);
	printf("%s\n", res);

	free(res);
	return (1);
}
