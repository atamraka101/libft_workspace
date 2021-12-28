/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_t_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:09:33 by atamraka          #+#    #+#             */
/*   Updated: 2021/12/27 13:12:11 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_t_list(t_list **list)
{
	t_list	*hold;
	t_list	*hold2;

	if (list != NULL && *list != NULL)
	{
		hold = *list;
		while (hold->next != NULL)
		{
			hold2 = hold;
			hold = hold->next;
			free(hold2);
		}
		free(hold);
	}
	if (list != NULL)
		free (list);
	hold = NULL;
	hold2 = NULL;
}
