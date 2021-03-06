/*
** Applies the function f to each character of the string passed
** as argument. Each character is passed by address to f to be
** modified if necessary.
** param 1- The string to iterate.
** Param 2- The function to apply to each character of s.
** Return value None.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
		{
			(*f)(s);
			s++;
		}
	}
}
