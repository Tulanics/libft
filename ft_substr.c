/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:08:03 by tconceic          #+#    #+#             */
/*   Updated: 2021/10/11 15:14:35 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen)
		str = (char *)malloc(slen + 1);
	else
		str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = start;
	j = 0;
	if (start < slen)
	{
		while (i < start + len && s[i] != '\0')
			str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
