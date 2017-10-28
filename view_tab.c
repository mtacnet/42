/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacnet <mtacnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:38:32 by mtacnet           #+#    #+#             */
/*   Updated: 2017/09/18 17:38:58 by mtacnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	view_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] && tab[i][0] != '\0')
	{
		ft_putendl(tab[i]);
		i++;
	}
}