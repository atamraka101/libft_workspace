/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:18:57 by atamraka          #+#    #+#             */
/*   Updated: 2021/12/16 14:48:43 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** integer to string
** allocate with malloc for the new string ending with '\0'
** negative nos. are supported
** returns string representing the integer passed as argument
*/
#include "libft.h"

static int	length(int n)
{
	int	i;
	//int	nb;

	i = 0;
	//nb = n;
	if (n <= 0)
	{
		i++;
		//if (n < 0)
		//	nb = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*set_string(char *a, int n, int i)
{
	unsigned int	copy;

	copy = n;
	a[i--] = '\0';
	if (n == 0)
	{
		a[0] = '0';
		return (a);
	}
	if (n < 0)
	{
		a[0] = '-';
		copy *= -1;
	}
	while (copy > 0)
	{
		a[i] = (copy % 10) + '0';
		copy = copy / 10;
		i--;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*a;

	i = length(n);
	a = (char *)malloc((sizeof(char)) * (i + 1));
	if (!a)
		return (NULL);
	set_string(a, n, i);
	return (a);
}
