/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:22:17 by jbashiri          #+#    #+#             */
/*   Updated: 2018/12/02 14:05:14 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int x;

	if (!s1 || !s2)
		return (0);
	x = 0;
	while (s1[x] != 0 || s2[x] != 0)
	{
		if (s1[x] - s2[x] != 0)
			return (0);
		x++;
	}
	return (1);
}
