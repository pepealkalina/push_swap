/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:06:23 by preina-g          #+#    #+#             */
/*   Updated: 2022/11/03 14:04:41 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pslib.h"

void	ft_check(int argc, char const **argv)
{
	if (argc == 2)
		ft_check_first_argu(argv[1]);
	else if (argc > 2)
		ft_check_intput(argv);
	else
		write(1, "Error, no input!!", 17);
}

int	main(int argc, char const **argv)
{
	ft_check(argc, argv);
	return (0);
}
