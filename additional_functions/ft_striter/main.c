#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *));

void	set_s(char *c)
{
	*c = 's';
}

int main(void)
{
	char str[] = "to set a";
	printf("To be changed: %s\n", str);
	ft_striter(str, &set_s);
	printf("Changed: %s\n", str);
	return (1);
}
