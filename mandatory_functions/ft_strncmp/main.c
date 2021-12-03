#include <stdio.h>
int	ft_strncmp(const char *ss1, const char *ss2, size_t n);
int main()
{
    char s1[10] = "aaa";
    char s2[10] = "aab";

    int compare1 = ft_strncmp(s1, s2, 2);
    int compare2 = ft_strncmp(s2, s1, 4);
    int compare3 = ft_strncmp(s1, s2, 4);
    int compare4 = ft_strncmp(s1, s2, 0);

    printf("0 %d\n", compare1);
    printf("1 %d\n", compare2);
    printf("-1: %d\n", compare3);
    printf("0: %d\n", compare4);

    return 0;
}
