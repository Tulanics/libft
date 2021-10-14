/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:43:53 by tconceic          #+#    #+#             */
/*   Updated: 2021/10/08 22:23:46 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_absolute(int n)
{
	long long int	n_abs;

	n_abs = n;
	if (n < 0)
		return (n_abs * -1);
	return (n_abs);
}

static int	ft_n_len(int n)
{
	int				n_len;
	long long int	n_abs;

	n_len = 1;
	n_abs = ft_absolute(n);
	while (n_abs >= 10)
	{
		n_abs /= 10;
		n_len++;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long int	n_abs;
	int				i;
	int				n_len;

	n_abs = ft_absolute(n);
	i = 0;
	n_len = ft_n_len(n);
	if (n < 0)
		n_len++;
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	str[n_len] = '\0';
	while (i < n_len)
	{
		str[--n_len] = (n_abs % 10) + '0';
		n_abs /= 10;
	}
	return (str);
}
