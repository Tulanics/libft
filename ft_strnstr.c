/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:08:23 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/19 12:52:00 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t biglen)
{
	const char	*str;

	str = little;
	if (*str == '\0')
		return ((char *)big);
	while (biglen --)
	{
		if (*str == *big)
			str++;
		else
		{
			big -= (str - little);
			biglen += (str - little);
			str = little;
		}
		big++;
		if (*str == '\0')
			return ((char *)(big - (str - little)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
