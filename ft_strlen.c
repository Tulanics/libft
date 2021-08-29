/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 22:26:47 by tconceic          #+#    #+#             */
/*   Updated: 2021/08/29 01:25:44 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlen(const char *s)
{
	int	i = 0;

	while(s[i] != '\0')
		i++;
	return(i);
}
