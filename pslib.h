/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:32:41 by preina-g          #+#    #+#             */
/*   Updated: 2022/11/03 13:59:59 by preina-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSLIB_H
# define PSLIB_H

# include <unistd.h>
# include "libft/libft.h"

void	ft_check_intput(char const **input);
char	**ft_check_first_argu(const char *argu);

#endif