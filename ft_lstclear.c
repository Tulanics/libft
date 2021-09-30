/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:05:24 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/30 14:24:10 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*present_elem;
	t_list	*next_elem;

	present_elem = *lst;
	while (present_elem != NULL)
	{
		next_elem = present_elem->next;
		ft_lstdelone(present_elem, del);
		present_elem = next_elem;
	}
	*lst = NULL;
}
