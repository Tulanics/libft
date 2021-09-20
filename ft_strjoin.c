/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:04:21 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/19 21:23:12 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*str_end;
	unsigned int	i;
	unsigned int	j;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_end = (char *)malloc(s1_len + s2_len + 1);
	if (!(char *)malloc(s1_len + s2_len + 1))
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		str_end[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
		str_end[i++] = s2[j++];
	str_end[i] = '\0';
	return (str_end);
}
