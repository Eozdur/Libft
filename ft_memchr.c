/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <ozduremre06@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:49:26 by eozdur            #+#    #+#             */
/*   Updated: 2022/12/13 14:11:52 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// s'de c'yi arar ve bulduğu yerden itibaren kalanını döndürür n kadar
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*k;
	size_t			i;
	int				kon;

	i = 0;
	kon = 0;
	k = (unsigned char *)s;
	while (i < n)
	{
		if (k[i] == (unsigned char)c)
			return (&k[i]);
		i++;
	}
	return (0);
}
