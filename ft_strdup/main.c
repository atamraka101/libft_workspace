#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1);

/*static void	rand_strdup(size_t max_len, size_t i)
{
	size_t	len = randi(max_len);
	char	*str, *dup;

	str = (char *) malloc(sizeof(char) * (len + 1));
	rand_str(str, len);
	dup = ft_strdup(str);
	if (strcmp(str, dup) != 0)
	{
		printf("test #%zu failed\nstr: [%s]\ndup: [%s]\n", i, str, dup);
		abort();
	}
	free(str);
	free(dup);
}

int	main(void)
{
	size_t	tests = 100, i = 0;

	printf("...ft_strdup\n");
	rand_strdup(0, i++);
	while (i < tests)
		rand_strdup(100, i++);
	return 1;
}*/

int main(void)
{
	char *s = "10203875";
	printf("%s\n", strdup(s));
	char *a = ft_strdup(s);
	//printf("%p\n", strdup(s));
	printf("%s\n", a);
	if (a != NULL)
		free (a);
	/*if (a)
		free (a);*/
	puts(a);
	return 1;
}

