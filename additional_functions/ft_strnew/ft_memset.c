/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:26:41 by atamraka          #+#    #+#             */
/*   Updated: 2021/12/07 15:25:53 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memset - fill byte string with byte value
*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*hold;
	size_t			i;

	if (str == NULL || n == 0)
		return (NULL);
	hold = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		hold[i] = (unsigned char)c;
		i++;
	}
	return (hold);
}
