/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:41:54 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/16 20:21:39 by tconceic         ###   ########.fr       */
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
	if (ch == '\0')
		return ((char *)s);
	while (s >= str)
	{
		if (ch == *s)
			return ((char *)s);
		s--;
	}
	return ('\0');
}
