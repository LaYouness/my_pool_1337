/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:57:46 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/19 00:42:07 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*d;
	int		i;

	i = 0;
	d = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			size;
	t_stock_str	*array;

	array = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		size = ft_strlen(av[i]);
		array[i].size = size;
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = NULL;
	return (array);
}
