/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:02:20 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/16 17:07:43 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	i = 0;
	if (dstsize == '\0')
		return (len2);
	if (dstsize <= len1)
		return (dstsize + len2);
	while (dst != src && src[i] != '\0' && len1 + i < dstsize - 1)
	{
		dst[len1 + i] = src[i];
		i++;
	}
	dst[len1 + i] = '\0';
	return (len1 + len2);
}
