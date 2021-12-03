#include <string.h>
#include <stdio.h>
char	*ft_strrchr(const char *s, int c);
int main(void)
{
	char *s = "What is wroang?";
	printf("%s \n", ft_strrchr(s, 'a'));
	printf("%s \n", strrchr(s, ' '));
	printf("%s \n", ft_strrchr(s, ' '));
	return 1;
}
