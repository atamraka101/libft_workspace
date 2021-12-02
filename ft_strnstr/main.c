#include <stdio.h>

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main()
{
	char s1[30] = "pen pineapple apple pen!";

	char* ptr = ft_strnstr(s1, "pine", 10);
	printf("%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "pine", 5);
	printf("%s\n", ptr1);

	return (0);
}
