/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:13:26 by atamraka          #+#    #+#             */
/*   Updated: 2021/12/01 21:28:48 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locate a substring in a string
** locates the first occurrence of the null-terminated string needle in
** the null-terminated string haystack.
** Returns:
** If needle is an empty string, haystack is returned;
** if needle occurs nowhere in haystack, NULL is returned;
** otherwise a pointer to the first character of the
** first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strstr(char *str, char *need)
{
	int	i;
	int	j;

	i = 0;
	if (need[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == need[j])
		{
			if (need[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
