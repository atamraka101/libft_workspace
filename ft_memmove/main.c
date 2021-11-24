#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

/*int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   //memmove(dest, src, 9);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);
   return(0);
}
*/
int main (void)
{
    char string [] = "stackoverflow";
    char *third, *fourth;
    third = string;
    fourth = string;

    puts(string);
    memcpy(third+5, third, 7);
    puts(third);
    memmove(fourth+5, fourth, 7);
    puts(fourth);
    return 0;
}
