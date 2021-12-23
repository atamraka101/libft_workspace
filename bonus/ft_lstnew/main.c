#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[] = "Hello";
	t_list *list;
	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (0);
	list = ft_lstnew((void const *)s, 5);
	if (list)
	 printf("%s\n",(char *)list->content);
	if (list)
		free(list);
		list = NULL;
	return (1);
}
