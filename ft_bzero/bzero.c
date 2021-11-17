/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:27:03 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/17 15:03:35 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** write zeroes to a byte string
** function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *a;

	i = 0;
	a = (unsigned char *)s;
	//printf("%c", *a);
	if (n == 0)
		return ;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
