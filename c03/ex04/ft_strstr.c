/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:59:36 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/12 02:38:17 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	while (*str)
	{
		s = str;
		f = to_find;
		while (*s == *f && *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (0);
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
char s[] = "123456789", f[] = "89aqr";
printf("%s\n",strstr(s,f));
printf("%s\n",ft_strstr(s,f));
}
*/
