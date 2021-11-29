#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);

int main(void)
{
	char *s2 = "fdgdf    .";
	printf("%lu\n", strlen(s2));
	printf("%zu\n", ft_strlen(s2));
	return (1);
}
