/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdur <eozdur@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:11 by eozdur            #+#    #+#             */
/*   Updated: 2023/07/04 15:43:36 by eozdur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//src'den dest'e n kadar hafıza alanında kopyalama işlemi yapıyor
// memcpy'den farkı overlap olayı olmasın diye aynı hafıza alanında ise 
// stringin sonundan itibaren kopyalama işlemi yapıyor
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	if (!dst && !src)
		return (0);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (src < dst)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	else if (src >= dst)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char a[] = "123456";
	char b[] = "emre";
	char ft_a[] = "123456";
	char ft_b[] = "emre";

	printf("org:%s\n", memmove(a, b, 3));
	printf("ft_:%s\n", ft_memmove(ft_a, ft_b, 3));
}
*/