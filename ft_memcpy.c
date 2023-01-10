/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <ozduremre06@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:18 by eozdur            #+#    #+#             */
/*   Updated: 2022/12/13 14:12:42 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// src'den dst'e n kadar kopyalama işlemi yapar
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*x;
	char	*y;

	i = 0;
	x = (char *)dst;
	y = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		x[i] = y[i];
		i++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char ft_a[] = "ork";
	char ft_b[] = "gork";
	printf("ft_:%s\n", ft_memcpy(ft_a, ft_b, 4));
}
*/