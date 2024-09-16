/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:55:12 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/03 11:41:30 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alphanum(char c)
{
	if (c < '0' || c > '9')
	{
		if (c < 'A' || c > 'Z')
		{
			if (c < 'a' || c > 'z' )
				return (0);
		}
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (alphanum(str[i - 1]) == 0)
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (alphanum(str[i - 1]) == 1)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
