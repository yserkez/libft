/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserkez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 22:43:16 by yserkez           #+#    #+#             */
/*   Updated: 2019/01/27 22:45:28 by yserkez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printall(char **args)
{
	int	i;

	i = -1;
	while (args && args[++i])
		args[i + 1] ? ft_printf("%s ", args[i]) : ft_printf("%s", args[i]);
}
