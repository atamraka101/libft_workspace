#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strstr(char *str, char *need);
int main(void)
{
	char *largestring = "Foo Bar Baz";
    char *smallstring = "Baf";
    char *ptr;

    ptr = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr);
	printf("%s\n", strstr(largestring, smallstring));
	smallstring = "Ba";
	ptr = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr);
	printf("%s\n", strstr(largestring, smallstring));
	smallstring = "";
	ptr = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr);
	printf("%s\n", strstr(largestring, smallstring));
	return 1;
}
