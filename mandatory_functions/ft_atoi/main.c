#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	int a;

	a = ft_atoi("-+42");
	printf("-+42 ==> %d\n", a);
	printf("-+42 ==> %d", atoi("-+42"));
	a = ft_atoi("  12345");
	printf("12345 ==> %d\n", a);
	a = ft_atoi("AAA123");
	printf("AAA123 ==> %d\n", a);
	a = ft_atoi("0");
	printf("0 ==> %d\n", a);
	a = ft_atoi("-173");
	printf("-173 ==> %d\n", a);
	a = ft_atoi("\t\v\f\r\n-06050");
	printf("\t\v\f\r\n-06050 ==> %d\n", a);
	a = ft_atoi("\t\v\f\r\n \f-06050");
	printf("\t\v\f\r\n \f-06050 ==> %d\n", a);
	return (0);
}
