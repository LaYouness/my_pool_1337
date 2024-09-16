/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:17:05 by ylaarare          #+#    #+#             */
/*   Updated: 2024/09/12 21:45:26 by ylaarare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int n, char **strs)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (strs[i][j])
		{
			write(1, &strs[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1 - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				t = av[j];
				av[j] = av[j + 1];
				av[j + 1] = t;
			}
			j++;
		}
		i++;
	}
	printer(ac, av);
}
