/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:44:26 by tconceic          #+#    #+#             */
/*   Updated: 2021/10/08 17:00:48 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t num, size_t size )
{
	void	*ptr;
	size_t	ptr_size;

	ptr_size = num * size;
	ptr = malloc(ptr_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, ptr_size);
	return (ptr);
}
