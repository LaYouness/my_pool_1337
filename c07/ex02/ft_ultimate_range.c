/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:30:02 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/16 16:08:18 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
int *r,x,i=0;
x = ft_ultimate_range(&r,-2147483648,2147483647);
printf("	%d\n",x);
while (i<x)
{
printf("%d\n",r[i]);
i++;
}
}
*/
