/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:49:26 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 23:34:32 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// s'de c'yi arar ve bulduğu yerden itibaren kalanını döndürür n kadar
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*k;
	size_t			i;

	i = 0;
	k = (unsigned char *)s;
	while (i < n)
	{
		if (k[i] == (unsigned char)c)
			return (&k[i]);
		i++;
	}
	return (0);
}
