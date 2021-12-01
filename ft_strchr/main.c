#include <string.h>
#include <stdio.h>
char	*ft_strchr(const char *s, int c);
int main(void)
{
	char *s = "What is wrong?";
	printf("%s \n", ft_strchr(s, 'i'));
	printf("%s\n", ft_strchr(s, 'z'));
	//strchr(s,'');
}
