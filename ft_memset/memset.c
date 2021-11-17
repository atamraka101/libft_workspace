/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:26:41 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/05 12:34:54 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stddef.h>
//#define size_t unsigned long
#include <unistd.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*hold;
	size_t	i;

	hold = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		hold[i] = (unsigned char)c;
		i++;
	}
	return (hold);
}
