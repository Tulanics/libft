/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:57:39 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/02 22:15:35 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	memcpy(void *dest, const void *src, size_t count)
{
	unsigned int	i;
	char		*sc;
	char	*dt;

	sc = (void *)src;
	dt = (void *)dest;
	i = 0;
	while (i < count && dt[i] != '\0')
	{
		dt[i] = sc[i];
		i++;
	}

	return ((unsigned char *)dt);
}
