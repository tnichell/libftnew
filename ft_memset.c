/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:12:39 by gusujio           #+#    #+#             */
/*   Updated: 2019/10/03 17:15:09 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*j;

	i = 0;
	j = (char*)b;
	while (i < len)
	{
		j[i] = c;
		i++;
	}
	return (b);
}
