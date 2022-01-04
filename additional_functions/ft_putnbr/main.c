#include "libft.h"
#include <limits.h>
#include <stdio.h>

void test_putnbr(int x)
{
	printf("Input: %d\n", x);
	printf(" Output: ");
	ft_putnbr(x);
	printf("\n");
}

int main(void)
{
	test_putnbr(0);
	test_putnbr(42);
	test_putnbr(12064);
	test_putnbr(INT_MAX);
	//test_putnbr(INT_MAX + 1);
	test_putnbr(INT_MAX - 1);
	test_putnbr(-32);
	test_putnbr(INT_MIN);
	test_putnbr(INT_MIN + 1);
	//test_putnbr(INT_MIN - 1);

	/*ft_putnbr(42);
	ft_putchar('\n');

	ft_putnbr(12036);
	ft_putchar('\n');

	ft_putnbr(-107);
	ft_putchar('\n');

	ft_putnbr(0);
	ft_putchar('\n');

	ft_putnbr(-1);
	ft_putchar('\n');

	ft_putnbr(2147483647);
	ft_putchar('\n');


	ft_putnbr(-2147483648);
	ft_putchar('\n');

	//ft_putnbr(4294967290);
	//ft_putchar('\n');*/

	return (0);
}
