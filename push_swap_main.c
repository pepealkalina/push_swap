/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:16:46 by preina-g          #+#    #+#             */
/*   Updated: 2022/10/31 13:27:23 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

int	ft_check_number(char **array)
{
	int	i;
	int	j;

	i = 1;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			if (array[i][j] >= '0' && array[i][j] <= '9')
				j++;
			else
			{
				write (1, "Error", 5);
				return (1);
			}		
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_check_number(argv);
	else
		write (1, "Error", 5);
	return (0);
}
