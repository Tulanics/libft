/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:57:53 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/07 13:32:58 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)dest;
	i = 0;
	while (len > 0)
	{
		str[i] = (unsigned char) c;
		i++;
		len --;
	}
	return (dest);
}
