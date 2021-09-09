/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 22:43:34 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/08 21:06:51 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	if (dest == NULL && src == NULL)
// 		return (NULL);
// 	if (dest < src)
// 		ft_memcpy(dest, src, n);
// 	else
// 		while (n--)
// 			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
// 	return (dest);
// }
void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, count);
	else
		while (count--)
			*(unsigned char *)(dest + count) = *(unsigned char *)(src + count);
	return (dest);
}
