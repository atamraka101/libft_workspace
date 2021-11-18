#include <stdio.h>
#include <stdlib.h>

char* ft_itoa(int n);

int main(void)
{
	int i;
	char* res;

	/*i = 20;
	res = ft_itoa(i);
	printf("%s\n", res);
	res = NULL;
	free(res);*/
	//printf("Test");
	//printf("%s", res);
	i = -2147483648;
	res = ft_itoa(i);
	printf("%s\n", res);
	res = NULL;
	free(res);
	/*i = 2147483647;
	res = ft_itoa(i);
	printf("%s\n", res);
	res = NULL;
	free(res);*/
	return (1);
}
