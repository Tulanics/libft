/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:57:39 by tconceic          #+#    #+#             */
/*   Updated: 2021/10/01 09:46:48 by tconceic         ###   ########.fr       */
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
	i = 0;
	if(!dest || !src)
		return (NULL);
	while (i < count)
	{
		dt[i] = sc[i];
		i++;
	}
	return ((unsigned char *)dt);
}
