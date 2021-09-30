/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:57:39 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/30 17:42:15 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned int	i;
	unsigned char	*sc;
	unsigned char	*dt;

	sc = (void *)src;
	dt = (void *)dest;
	if( *dt != NULL && *sc != NULL)
		return (NULL);
	i = 0;
	while (i < count &&)
	{
		dt[i] = sc[i];
		i++;
	}
	return ((unsigned char *)dt);
}
