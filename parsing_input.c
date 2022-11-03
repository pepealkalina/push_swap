/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:09:59 by preina-g          #+#    #+#             */
/*   Updated: 2022/11/03 15:20:01 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ft_check_intput(char const **input)
{
	int	i;
	int	j;

	i = 1;
	while (input[i])
	{
		j = 0;
		while (input[i][j] != '\0')
		{
			if (input[i][j] >= '0' && input[i][j] <= '9')
				j++;
			else
			{
				write(1, "Error, Wrong input format!!\nOnly integers!!\n", 44);
				break ;
			}
		}
		i++;
	}
}

char	**ft_check_first_argu(const char *argu)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (argu[i])
	{
		if ((argu[i] >= '0' && argu[i] <= '9')
			|| (argu[i] == ' ' || argu[i] == '\t'))
		{
			i++;
			flag = 1;
		}
		else
		{
			write(1, "Error, Wrong input format!!\nOnly integers!!\n", 44);
			flag = 0;
			break ;
		}
	}
	if (flag == 1)
		return (ft_split(argu));
	return (0);
}

void	ft_check_dup(char *input)
{
	int	i;
	int	j;
	int	letter_count;

	i = 0;
	while (i < ft_strlen(input))
	{
		
	}
}
