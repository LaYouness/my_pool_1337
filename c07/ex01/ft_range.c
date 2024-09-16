/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:02:26 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/16 16:04:31 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	t = (int *) malloc(sizeof(int) * (max - min));
	if (!t)
		return (NULL);
	while (i < max - min)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
