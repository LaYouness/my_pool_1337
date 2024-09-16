/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:48:40 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/01 16:16:54 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char *str, int i)
{
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	str[11];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = -nb;
		}
		while (nb > 9)
		{
			str [i] = nb % 10 + '0';
			nb = nb / 10;
			i++;
		}
		str [i] = nb + '0';
		print (str, i);
	}
}
