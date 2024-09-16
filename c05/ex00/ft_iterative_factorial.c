/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:04:51 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/12 14:14:04 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(-1));
}
*/
