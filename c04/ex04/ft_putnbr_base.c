/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:30:55 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/18 19:41:42 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	validbase(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && base[j])
		{
			j++;
		}
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	c;
	int		b;
	int		m;
	int		inbr;

	if (validbase(base) == 0)
		return ;
	inbr = nbr;
	b = ft_strlen(base);
	m = inbr % b;
	if (inbr < 0)
		m = (unsigned int) -inbr % b;
	c = base[m];
	if (inbr >= (int) b || (unsigned int) -inbr >= (unsigned int) b)
	{
		inbr /= b;
		if (inbr != 0)
			ft_putnbr_base(inbr, base);
	}
	if (nbr < 0 && inbr == nbr)
		write (1, "-", 1);
	write(1, &c, 1);
}
