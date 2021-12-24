/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:54:10 by atamraka          #+#    #+#             */
/*   Updated: 2021/12/23 14:46:45 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the element new at the beginning of the list.
** Param. #1 The address of a pointer to the first link of a list.
** Param. #2 The link to add at the beginning of the list.
** Return value None.
** Libc functions None.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_lst *new)
{
	if (*alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
