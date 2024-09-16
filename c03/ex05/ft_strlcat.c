/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:31:57 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/12 02:39:04 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	j = 0;
	if (size <= dl)
		return (size + sl);
	while (src[j] != '\0' && (j < size - 1 - dl))
	{
		dest[dl + j] = src[j];
		j++;
	}
	dest[dl + j] = '\0';
	return (dl + sl);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char d[10] = "123",d1[10] = "123",s[] = "456789";
	int n = 7;
	printf("%u %s\n",ft_strlcat(d,s,n),d);
    printf("%lu %s\n",strlcat(d1,s,n),d1);
}
*/
