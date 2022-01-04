#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char	*ft_itoa(int n);

void print_itoa_result(int n)
{
	char *res;

	res = ft_itoa(n);
	printf("Input:%d -> output:%s\n", n, res);
	free(res);

}

int main(void)
{

	print_itoa_result(0);
	print_itoa_result(20);
	print_itoa_result(INT_MIN);
	print_itoa_result(INT_MIN + 1);
	print_itoa_result(INT_MIN - 1);
	print_itoa_result(INT_MAX);
	print_itoa_result(INT_MAX + 1);
	print_itoa_result(INT_MAX - 1);

	//printf("Test");
	//printf("%s", res);
	/*i = -2147483648;
	res = ft_itoa(i);
	printf("%s\n", res);

	free(res);
	i = 2147483647;
	res = ft_itoa(i);
	printf("%s\n", res);

	free(res);*/
	return (1);
}
