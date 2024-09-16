/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:58:22 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/16 15:58:15 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*uhu(char **strs, char *sep, char *strj, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(strj, strs[i]);
		if (i < size - 1)
			ft_strcat(strj, sep);
		i++;
	}
	return (strj);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tsw;
	char	*strj;
	int		fs;

	if (size == 0)
	{
		strj = (char *) malloc(sizeof(char));
		strj[0] = '\0';
		return (strj);
	}
	tsw = 0;
	i = 0;
	while (i < size)
	{
		tsw += ft_strlen(strs[i]);
		i++;
	}
	fs = ((size - 1) * ft_strlen(sep)) + (tsw + 1);
	strj = (char *) malloc(sizeof(char) * fs);
	if (strj == NULL)
		return (NULL);
	strj[0] = '\0';
	strj = uhu(strs, sep, strj, size);
	return (strj);
}
/*
#include <stdio.h>
int main()
{

	char	*strs[] = {"hello", "world", "hehe"};
	char	sep[] = ", ";
	printf("%s\n", ft_strjoin(3,strs,sep));
}
*/
