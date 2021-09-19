/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:37:08 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/19 08:59:37 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned int	i;
	unsigned char	chr;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	chr = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		if (*str == chr)
		{
			return (str);
		}
		i++;
		str ++;
	}
	return ('\0');
}
