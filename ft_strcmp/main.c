#include <stdio.h>
//#include <assert.h>
#include <string.h>
#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2);
int	main()
{
	char *str1 = "a";
	char *str2 = "anjalas";
	printf("Result: %d\n", strcmp(str1, str2));
	printf("Result: %d\n", ft_strcmp(str1, str2));
}

/*int main(void)
{
	assert(ft_strcmp("abc", "abc") == 0);
	assert(ft_strcmp("aa", "bb") < 0);
	assert(ft_strcmp("bb", "aa") > 0);
	assert(ft_strcmp("aab", "aac") < 0);
	//printf("%s\n", "all tests passed!");
}*/
