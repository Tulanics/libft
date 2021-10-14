/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:41:54 by tconceic          #+#    #+#             */
/*   Updated: 2021/10/08 19:04:47 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*s;
	int			i;

	s = str;
	i = 0;
	while (s[i])
		s++;
	if ((unsigned char)ch == '\0')
		return ((char *)s);
	while (s >= str)
	{
		if ((unsigned char)ch == *s)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
