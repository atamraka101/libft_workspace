#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	set_a(unsigned int i, char *c)
{
	unsigned int a;

	a = i;
	*c = 'a';
}

int main(void)
{
	char str[] = "to set a";
	printf("To be changed: %s\n", str);
	ft_striteri(str, &set_a);
	printf("Changed: %s\n", str);
	return (1);
}
