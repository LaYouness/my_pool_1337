/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:18:45 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/06 22:23:06 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	whex(char x, char y)
{
	if (x >= 0 && x <= 9)
		x = x + '0';
	else
		x = x + 87;
	if (y >= 0 && y <= 9)
		y = y + '0';
	else
		y = y + 87;
	write(1, "\\", 1);
	write(1, &x, 1);
	write(1, &y, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	x;
	char	y;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 127)
			write(1, "\\7f", 3);
		else if (str[i] <= 31)
		{
			x = str[i] / 16;
			y = str[i] % 16;
			whex(x, y);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
