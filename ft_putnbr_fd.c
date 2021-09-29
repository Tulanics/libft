/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:06:18 by tconceic          #+#    #+#             */
/*   Updated: 2021/09/28 21:33:45 by tconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = n * (-1);
		ft_putchar_fd('-', fd);
		if (n <= -10)
			ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd((num % 10) + '0', fd);
	}
	else if (n >= 10)
	{
		num = n;
		ft_putnbr_fd((num / 10), fd);
		ft_putchar_fd((num % 10) + '0', fd);
	}
	else
	{
		num = n;
		ft_putchar_fd(num + '0', fd);
	}
}
