/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:18:43 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/29 21:19:53 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (len-- != 0)
			dst[i] = src[i];
		i++;
	}
	while (len != 0)
	{
		dst[i++] = '\0';
		len--;
	}
	return (dst);
}
