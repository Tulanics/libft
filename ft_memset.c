/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:57:53 by tconceic          #+#    #+#             */
/*   Updated: 2021/08/31 19:22:41 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	long unsigned int	i;

	str = (unsigned char *)s;
	i = 0;
	if((i <= n) && str[i] != '\0')
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return(str);
}
