# include<stdio.h>

void	ft_bzero(void *s, size_t n);

int main(void)
{
	char *str="Hello World";
	ft_bzero(&str, 5);
	printf("%s", str);
	return 1;
}
