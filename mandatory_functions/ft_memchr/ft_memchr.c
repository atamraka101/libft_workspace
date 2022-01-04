/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:01:56 by atamraka          #+#    #+#             */
/*   Updated: 2022/01/01 20:58:02 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *)s;
	if ((unsigned char)c == '\0')
	{
		while (i < n)
		{
			if (copy[i] == (unsigned char)c)
				return (&copy[i]);
			i++;
		}
	}
	//printf("copy[%zu]:: %02X\n", i, copy[0]);
	while (i < n )
	{
		if (copy[i] == (unsigned char)c)
			return (&copy[i]);
		i++;
	}

	/*printf("n: %zu, i: %zu\n", n, i);
	printf("c :: %02X\n", (unsigned char) c);*/

	return (NULL);
}
