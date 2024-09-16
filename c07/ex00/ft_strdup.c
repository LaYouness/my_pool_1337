/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:31:36 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/16 15:58:53 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
