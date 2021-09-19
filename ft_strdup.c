/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:33:48 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/19 17:02:39 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	size_t	str_size;

	str_size = ft_strlen(str1) + 1;
	str2 = (char *)ft_calloc(*str1, str_size);
	ft_strlcpy(str2, str1, str_size);
	return (str2);
}
